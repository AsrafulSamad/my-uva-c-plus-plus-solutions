    #include<iostream>
	#include <cstdio>
	#include <vector>
	#include <algorithm>
	using namespace std;

	#define edge pair< int, int >
	#define MAX 200005

	// ( w (u, v) ) format
	vector< pair< int, edge > > GRAPH, MST;
	int parent[MAX], total, N, E,t;

	int findset(int x, int *parent)
	{
	    if(x != parent[x])
	        parent[x] = findset(parent[x], parent);
	    return parent[x];
	}

	void kruskal()
	{
	    int i, pu, pv;
	    sort(GRAPH.begin(), GRAPH.end()); // increasing weight
	    for(i=total=0; i<E; i++)
	    {
	        pu = findset(GRAPH[i].second.first, parent);
	        pv = findset(GRAPH[i].second.second, parent);
	        if(pu != pv)
	        {
	            MST.push_back(GRAPH[i]); // add to tree
	            total += GRAPH[i].first; // add edge cost
	            parent[pu] = parent[pv]; // link

	        }
	    }
	}

	void reset()
	{
	    // reset appropriate variables here
	    // like MST.clear(), GRAPH.clear(); etc etc.
	    for(int i=0; i<=N; i++) parent[i] = i;
	}

	void print()
	{


	    printf("%d\n", t-total);
	}

	int main()
	{
      int i, u, v, w,e;

      while(scanf("%d %d",&N,&E)){
          if(N==0&&E==0) break;
          t=0;
	    for(i=0; i<E; i++)
	    {
            scanf("%d %d %d", &u, &v, &w);
	        GRAPH.push_back(pair< int, edge >(w, edge(u, v)));
	    t+=w;
	    }

	    reset();
	    kruskal(); // runs kruskal and construct MST vector
	    print(); // prints MST edges and weights

         GRAPH.clear();
         MST.clear();

        }

	    return 0;
	}
