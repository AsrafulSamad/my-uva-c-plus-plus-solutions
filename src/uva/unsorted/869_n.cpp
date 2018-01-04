#include<stdio.h>


int main(){

    int t,a[28][28] ,b[28][28],i,j,k,n,m;
    char c1,c2,c;
    scanf("%d",&t);

    while(t--){
        for(i=1;i<=26;++i){
          for(j=i+1;j<=26;++j)
                a[i][j]=a[j][i]=b[i][j]=b[j][i]=0;
             a[i][i]=b[i][i]=0;
          }

        scanf("%d",&n);

       for(i=1;i<=n;++i){
         scanf("\n%c %c",&c1,&c2);
         a[c1-64][c2-64]=a[c2-64][c1-64]=1;
        }


        scanf("%d",&m);

     for(i=1;i<=m;++i){
       scanf("\n%c %c",&c1,&c2);
        b[c1-64][c2-64]=b[c2-64][c1-64]=1;
       }


for(k=1;k<=26;++k)
 for(i=1;i<=26;++i)
  for(j=1;j<=26;++j)
   if(i!=k && i!=j && j!=k ){
       if(a[i][k]>0 && a[k][j]>0 && a[i][j]<1)
         a[i][j]=1;
       if(b[i][k]>0 && b[k][j]>0 && b[i][j]<1)
         b[i][j]=1;
         }

int f=0;

for(i=1;i<=26;++i){
 for(j=1;j<=26;++j)
   if(i!=j && a[i][j]!=b[i][j]){
       f=1;
       break;
       }
   if(f==1) break;
   }

if(f==0)
 printf("YES\n");
else
 printf("NO\n");

if(t!=0)
 printf("\n");

}
    return 0;
    }
