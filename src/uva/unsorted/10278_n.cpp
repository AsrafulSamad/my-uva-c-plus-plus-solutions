#include<iostream>
#include <stdio.h>
#define GRAPHSIZE 510
#define INF (1<<10)
#define MAX(a, b) ((a > b) ? (a) : (b))

using namespace std;

int e;
int n;
long dist[GRAPHSIZE][GRAPHSIZE];
long d[GRAPHSIZE];


void dijkstra(int s) {
	int i, k, mini;
	int visited[510];

	for (i = 1; i <= n; ++i)
		visited[i] = 0;

     	d[s] = 0;

	for (k = 1; k <= n; ++k) {
		mini = -1;
		for (i = 1; i <= n; ++i)
			if (!visited[i] && ((mini == -1) || (d[i] < d[mini])))
				mini = i;

		visited[mini] = 1;

		for (i = 1; i <= n; ++i)
			if (dist[mini][i])
				if (d[mini] + dist[mini][i] < d[i])
					d[i] = d[mini] + dist[mini][i];
	}
}


long dijkstra(int s ,long d2[]) {
	int i, k, mini;
    long  max=0;
	long d3[510];
	int visited[510];

 for(i=1;i<=n;++i){
    d3[i]=d2[i];
    visited[i] = 0;
 }

     	d3[s] = 0;

	for (k = 1; k <= n; ++k) {
		mini = -1;
		for (i = 1; i <= n; ++i)
			if (!visited[i] && ((mini == -1) || (d3[i] < d3[mini])))
				mini = i;

		visited[mini] = 1;

		for (i = 1; i <= n; ++i)
			if (dist[mini][i])
				if (d3[mini] + dist[mini][i] < d3[i])
					d3[i] = d3[mini] + dist[mini][i];
	}

for(i=1;i<=n;++i)
  if(max<d3[i])
     max=d3[i];

  return max;
}

int main() {
	int i, j;
	int u, v, w,t,f,f1[510],f2;
	long min2,min3;
	char str[25];
     cin.getline(str,25);
     sscanf(str,"%d",&t);
     cin.getline(str,25);

    while(t--){
    cin.getline(str,25);
	sscanf(str,"%d %d",&f,&n);
     f2=0;

     for (i = 1; i <= n; ++i){
		f1[i] = 0;
        d[i] = INF;
     }

    for(i=1;i<=f;++i){
       cin.getline(str,25);
       sscanf(str,"%d",&u);
       f1[u]=1;
    }

	for (i = 1; i <=n; ++i)
		for (j = i; j <=n; ++j)
			dist[i][j] = dist[j][i]=0;


u=-1;v=-1;
     while(1){
        cin.getline(str,25);
        if(str[0]=='\0') break;

		sscanf(str,"%d %d %d", &u, &v, &w);

		 if(!dist[u][v])
	    	dist[u][v] = dist[v][u]=w;
	    else if(dist[u][v]>w)
	        dist[u][v] = dist[v][u]=w;
	}

if(u==-1 && v==-1){
  printf("1\n");
if(t!=0) printf("\n");
continue;
}

  for(i=1;i<=n;++i)
	if(f1[i])
	dijkstra(i);

min2=INF;

for(i=1;i<=n;++i)
  if(!f1[i]){
      min3=dijkstra(i,d);
      if(min2>min3){
          min2=min3;
          u=i;
      }
}

printf("%d\n",u);

   if(t!=0) printf("\n");

  }
	return 0;
}
