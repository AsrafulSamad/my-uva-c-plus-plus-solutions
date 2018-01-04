#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<queue>
#include<vector>
#include<algorithm>
#include<map>
#include<memory>

using namespace std;

#define max 30
#define CLEAR(A)  (  memset(A,0,sizeof(A))  )

bool   V[max][max],SV[max][max] ;

int used[max],M,N,E,res;
map<string,int> na;
map<int,string> nam;
map<string,int> :: iterator it;

vector<int> topo;
vector<int>ans[max] ;



void DFS(int s){
	int i;
	used[s]=1;
	for(i=1;i<=N;i++){
		if( V[s][i]  )
		if(used[ i ]==0)
			DFS(i);
	}
	topo.push_back(s);
}

void anotherDFS(int s,int l ){
	int i;
	used[s]=1;
	ans[l].push_back(s);
	for(i=1;i<=N;i++){
		if(SV[s][i]==1 )
		if(used[i]==0)
			anotherDFS(i, l );
	}
}

void findSCC(int N){
	int i;
	CLEAR(used);
	for(i=1;i<=N;i++){
		if(used[i]==0)
			DFS(i);
	}
	CLEAR(used);
	res=0;
	for(i=topo.size()-1;i>=0;i--){
		if(used[topo[i]]==0){
			res++;
			anotherDFS( topo[i] ,res );
		}
	}

}



void init(){
   for(int i=1;i<=N;i++){
     for(int j=i;j<=N;j++)
                V[i][j]=V[j][i]=SV[i][j]=SV[j][i]=0;
             ans[i].clear();
         }
         na.clear();
         nam.clear();
         topo.clear();
    }





int main(){

 string s1,s2;
 int c,u,v,kase=0;

 while( cin>>N>>E  ){

    if(N==0 && E==0) break;
           c=0;
    if( kase>0 )
         cout<<endl;

         init();

   for(int i=1;i<=E;i++ ){
            cin>>s1>>s2;

            it=na.find(s1);

            if(it!=na.end())
                  u=it->second;
            else{
                 na[s1]=++c;
                 nam[c]=s1;
                 u=c;
               }

            it=na.find(s2);

            if(it!=na.end())
                  v=it->second;
            else{
                 na[s2]=++c;
                 nam[c]=s2;
                 v=c;
               }

            V[u][v]=1;
            SV[v][u]=1;

          }

       findSCC(N);

cout<<"Calling circles for data set "<<++kase<<":\n";

  for(int i=1;i<=res;i++){
     for(int j=0;j<ans[i].size();j++){
           if(j==0 )
                 cout<<nam[ ans[i][j] ] ;
           else
                 cout<<", "<<nam[ ans[i][j] ];
           }
         cout<<endl;
     }

}


    return 0;
    }
