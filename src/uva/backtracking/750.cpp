#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int x[10],xx,yy,count;

bool  place(int k, int i){
    for(int j=1;j<k;++j){
        if(x[j]==i || (abs(x[j]-i)==abs(j-k)))
          return 0;

        }
    return 1;
}

void nq(int k, int n){
    for(int i=1;i<=n;++i)
     {
         if(place(k,i)){
             x[k]=i;
             if(k==n)
               {
                  if(x[yy]==xx){
                   printf("%2d      ",++count);
                   for(int j=1;j<n;++j)
                    printf("%d ",x[j]);
                    printf("%d\n",x[n]);
                  }
                }
            else
              nq(k+1,n);

             }
     }

    }




int main(){
   int t;
   scanf("%d",&t);
   while(t--){

   scanf("%d %d",&xx,&yy);
   printf("SOLN       COLUMN\n");
   printf(" #      1 2 3 4 5 6 7 8\n\n");
   count=0;
   nq(1,8);

    if(t!=0)
     printf("\n");

   }

    return 0;
}
