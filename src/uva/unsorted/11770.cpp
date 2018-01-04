// C++ Code : Strongly Connected Component Algorithm (SCC)
#include<cstdio>
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<map>
#include<memory.h>

using namespace std;

#define INF  1073741822
#define MAX(a,b)  ((a>b)?a:b)
#define MIN(a,b)  ((a<b)?a:b)
#define CLEAR(A,N)  (memset(A,0,(N)*sizeof(A[0])))
#define ma  10002
typedef long double LD;

vector<int> v[ma]  ; //,sv[1005];
vector<int> topo;
int used[ma],M,N;

void DFS(int s){
	int i;
	used[s]=1;
	for(i=0;i<v[s].size();i++){
		if(used[v[s][i]]==0)
			DFS(v[s][i]);
	}
	topo.push_back(s);
}

void anotherDFS(int s){
	int i;
	used[s]=1;
	for(i=0;i<v[s].size();i++){
		if(used[v[s][i]]==0)
			anotherDFS(v[s][i]);
	}
}

int findSCC(int N){
	int res,i;
	CLEAR(used,N+1);
	for(i=1;i<=N;i++){
		if(used[i]==0)
			DFS(i);
	}
	CLEAR(used,N+1);
	res=0;
	for(i=topo.size()-1;i>=0;i--){
		if(used[topo[i]]==0){
			anotherDFS(topo[i]);
			res++;
		}
	}
	return res;
}


int main() {

	int test,t,a,b,i,res;

	scanf("%d",&test);
	for(t=1;t<=test;t++){
		// N is the number if Node, M is the number of Edge
		scanf("%d %d",&N,&M);
		for(i=0;i<M;i++){
			scanf("%d %d",&a,&b);
			v[a].push_back(b);
			//sv[b].push_back(a);
		}
		res=findSCC(N);

		printf("Case %d: %d\n",t,res);

		//CLEAR all vectors
		for(i=1;i<=N;i++){
			v[i].clear();
			//sv[i].clear();
		}
		topo.clear();

	}


return 0;
}



