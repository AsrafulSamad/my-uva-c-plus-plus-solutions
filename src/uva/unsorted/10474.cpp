#include<stdio.h>
#include<algo.h>
int main(){

    int a[10001],m,n,i,j,b[10001],c=0,flag;
    while(scanf("%d %d",&m,&n)==2){
        c++;
        if(m==0 && n==0) break;

         printf("CASE# %d:\n",c);
        for(i=0;i<m;i++)
           scanf("%d",&a[i]);

        for(i=0;i<n;i++)
            scanf("%d",&b[i]);

          sort(a,a+m);

          for(i=0;i<n;i++){
                    flag=0;
             for(j=0;j<m;j++)
                 if(b[i]==a[j]){
                     printf("%d found at %d\n",b[i],j+1);
                      flag=1;
                      break;
                          }
                 if(flag==0)
                    printf("%d not found\n",b[i]);

                 }



        }



    return 0;
    }
