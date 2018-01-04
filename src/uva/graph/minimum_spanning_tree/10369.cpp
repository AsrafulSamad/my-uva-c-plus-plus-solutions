#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<queue>
#include<stack>
#include<list>

using namespace std;

#define edge pair< int, int >
#define dis(x1,y1,x2,y2)  sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)  )
#define max 550




struct node{
    double x,y;
    } NP[max];

double len[max];



vector< pair< double, edge > > GRAPH ;



int parent[max] ;
int S,P,u,v;
int E,c;



unsigned int  findset(int x,int *parent)
    {
        if(x != parent[x])
            parent[x] = findset(parent[x], parent);
        return parent[x];
       }


void reset()
  {
    for( int i=0; i<=P; i++) parent[i] = i;
  }


void kruskal()
  {
    int i, pu, pv;
   c=0;
   sort(GRAPH.begin(), GRAPH.end());

   for(i=0; i<E; i++)
    {
     pu = findset(GRAPH[i].second.first, parent);
     pv = findset(GRAPH[i].second.second, parent);
     if(pu != pv)
         {
          parent[pu] = parent[pv];
          ++c;
          len[c]=GRAPH[i].first;
          //cout<<GRAPH[i].first<<endl;

         }
          if(c==P-1) {
               break;
              }
        }
    }




int main(){
    int t;
    cin>>t;
   while(t--){
        cin>>S>>P;

        for(int i=1;i<=P;i++)
          cin>>NP[i].x>>NP[i].y;
         E=0;
       for(int i=1;i<P;i++){
           for(int j=i+1;j<=P;j++){
               double d=dis(NP[i].x,NP[i].y,NP[j].x,NP[j].y);
               GRAPH.push_back(pair< double , edge >(d, edge(i, j)));
               ++E;
               }

           }


    reset();
    kruskal();

    printf("%.2lf\n",len[P-S]);


    GRAPH.clear();



       }






    return 0;
    }
