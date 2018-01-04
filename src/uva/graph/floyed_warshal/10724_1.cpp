#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<vector>

using namespace std;


#define dif(x1,y1,x2,y2)  sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) )
#define min(a,b)  (a<b) ? a:b
#define inf 99999999.00

int n,m,u,v;
bool a[55][55];
float cur,pre[55][55],cuv,dis;

struct node{
     float x,y;
    } nod[55];


void inline init(){
     for(int i=1;i<=n;i++){
       for(int j=i+1;j<=n;j++){
         a[i][j]=a[j][i]=0;
         pre[i][j]=pre[j][i]=inf;
        }
        pre[i][i]=0;
       }
    }

int main(){



  while(scanf("%d %d",&n,&m) ==2 ){
        if(n==0 && m==0)
           break;

        init();

        for(int i=1;i<=n;i++)
          scanf("%f %f",&nod[i].x,&nod[i].y );

        for(int i=1;i<=m;i++)   {
           scanf("%d %d",&u,&v);
           a[u][v]=a[v][u]=1;
           pre[u][v]=pre[v][u]=dif(nod[u].x,nod[u].y,nod[v].x,nod[v].y);
        }


      for( int k=1;k<=n;k++ )
        for( int i=1;i<=n;i++ )
          for( int j=1;j<=n;j++ )
            if( pre[i][j]>pre[i][k]+pre[k][j] )
                pre[i][j]=pre[i][k]+pre[k][j];


           cuv= -10.0;
       for(int l=1;l<n;l++)
         for(int m=l+1;m<=n;m++ ){
             if(a[l][m]==0){

                 dis=dif(nod[l].x,nod[l].y,nod[m].x,nod[m].y);

             float cuv1=0;

             for(int i=1;i<n;i++)
               for(int j=i+1;j<=n;j++){
                  float d3=min(pre[i][l]+dis+pre[m][j] ,pre[i][m]+dis+pre[l][j] );
                  cur=min(pre[i][j],d3 );
                  cuv1+=pre[i][j]-cur;
                  //printf("%d %d %lf %lf \n",i,j,pre[i][j],cur);
                }

                if(cuv1>cuv)
                     {
                      u=l;v=m;
                      cuv=cuv1;
                      }
                else if(cuv1==cuv ){
                    float d1=dif(nod[l].x,nod[l].y,nod[m].x,nod[m].y);
                    float d2=dif(nod[u].x,nod[u].y,nod[v].x,nod[v].y);
                     if(d1<d2){
                           u=l;v=m;
                           cuv=cuv1;
                         }
                    }
               //printf("%lf %d %d\n",cuv1,l,m );
             }
        }

       if(cuv<=1)
         printf("No road required\n");
       else
         printf("%d %d\n",u,v);

    }

  return 0;
 }
