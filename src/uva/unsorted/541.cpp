#include<stdio.h>

int main(){
    int a[100][100],i,j,k,l,m,c1,c2,sum;
    while(scanf("%d",&m)&&m){


          for(i=0;i<m;i++)
           for(j=0;j<m;j++)
             scanf("%d",&a[i][j]);

          c1=0;c2=0;

          for(i=0;i<m;i++){
              sum=0;
           for(j=0;j<m;j++)
                sum+=a[i][j];

          if(sum%2==1){
              if(c1==1){
                  c1=2;
                  break;

                  }
              l=i;

              c1=1;
              }
          }


          for(i=0;i<m;i++){
              sum=0;
           for(j=0;j<m;j++)
                sum+=a[j][i];

          if(sum%2==1){
              if(c2==1){
                  c2=2;
                  break;

                  }
              k=i;

              c2=1;
              }

          }

 if(c1==0&&c2==0)
   printf("OK\n");
 else if(c1==1&&c2==1)
   printf("Change bit (%d,%d)\n",l+1,k+1);
else
   printf("Corrupt\n");


        }








    return 0;
    }
