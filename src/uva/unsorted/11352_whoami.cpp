#include <cstdio>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

typedef pair< int, int > pii;
typedef pair< int, pii > edge;

const int INF = 0x3f3f3f3f;

char grid[128][128];
int d[128][128];

int dr[] = {-1,-1,-1,0,0,1,1,1};
int dc[] = {-1,0,1,-1,1,-1,0,1};
int hr[] = {-1,-2,-2,-1,1,2,2,1};
int hc[] = {-2,-1,1,2,-2,-1,1,2};

inline bool inside(int a, int b, int c) { return a <= b && b <= c; }

inline void find(int R, int C, int &r, int &c, char ch) {
	for(int i = 0; i < R; i++) {
		for(int j = 0; j < C; j++) {
			if(grid[i][j] == ch) {
				r = i, c = j;
				return;
			}
		}
	}
	r = c = -1;
}

int bfs(int r, int c, int sr, int sc, int er, int ec) {
	queue< int > Q;
	int ur, uc, i, vr, vc;
	memset(d, 0x3f, sizeof d);
	Q.push(sr), Q.push(sc);
	d[sr][sc] = 0;
	while(!Q.empty()) {
		ur = Q.front(); Q.pop();
		uc = Q.front(); Q.pop();
		for(i = 0; i < 8; i++) {
			vr = dr[i] + ur, vc = dc[i] + uc;
			if(inside(0, vr, r-1) && inside(0, vc, c-1) && grid[vr][vc]=='.') {
				if(d[vr][vc] > d[ur][uc] + 1) {
					d[vr][vc] = d[ur][uc] + 1;
					Q.push(vr), Q.push(vc);
				}
			}
		}
	}
	return d[er][ec];
}

int main() {
	int test, r, c, i, j, k, rr, cc, sr, sc, er, ec, ret;
	scanf("%d", &test);
	while(test--) {
		scanf("%d%d", &r, &c);
		for(i = 0; i < r; i++) scanf("%s", grid[i]);

		for(i = 0; i < r; i++) {
			for(j = 0; j < c; j++) {
				if(grid[i][j]=='Z') {
					for(k = 0; k < 8; k++) {
						rr = i + hr[k], cc = j + hc[k];
						if(inside(0,rr,r-1) && inside(0,cc,c-1) && grid[rr][cc]=='.') grid[rr][cc] = 'X';
					}
					grid[i][j] = 'X';
				}
			}
		}

		find(r, c, sr, sc, 'A'); grid[sr][sc] = '.';
		find(r, c, er, ec, 'B'); grid[er][ec] = '.';

		ret = bfs(r, c, sr, sc, er, ec);

		if(ret == INF) printf("King Peter, you can't go now!\n");
		else printf("Minimal possible length of a trip is %d\n", ret);

	}

	return 0;
}
