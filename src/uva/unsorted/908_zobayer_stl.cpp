
	#include <cstdio>
	#include <vector>
	#include <algorithm>
	using namespace std;

	#define edge pair< int, int >
	#define MAX 1001

	// ( w (u, v) ) format
	vector< pair< int, edge > > GRAPH, MST;
	int parent[MAX], total, N, E;

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
	    for(int i=1; i<=N; i++) parent[i] = i;
	}

	void print()
	{
	    int i, sz;
	    // this is just style...
	    sz = MST.size();
	    printf("%d\n", total);
	}

	int main()
	{
	    int i, u, v, w,e;
        int min1,f=0;


      while(scanf("%d",&N)!=EOF){
          min1=0;
        if(f!=0) printf("\n");
           f=1;
        for(i=1;i<N;++i){
            scanf("%d %d %d",&u,&v,&w);
            min1+=w;
            }
         printf("%d\n",min1);

        scanf("%d",&e);
       for(i=0; i<e; i++)
	    {
            scanf("%d %d %d", &u, &v, &w);
	        GRAPH.push_back(pair< int, edge >(w, edge(u, v)));
	    }
        E=e;
        scanf("%d",&e);
	    for(i=0; i<e; i++)
	    {
            scanf("%d %d %d", &u, &v, &w);
	        GRAPH.push_back(pair< int, edge >(w, edge(u, v)));
	    }
        E+=e;
	    reset();
	    kruskal(); // runs kruskal and construct MST vector
	    print(); // prints MST edges and weights

         GRAPH.clear();
         MST.clear();
        }
	    return 0;
	}
