#include<stdio.h>
#include<stdlib.h>
#include<memory.h>

int main(){
    int n,i,f,a[3000] ,k;
    while(scanf("%d",&n)!=EOF){


            for(int l=0;l<=n;l++)
                 a[l]=0;

           scanf("%d",&k);

            for(i=1;i<n;i++){
                scanf("%d",&f );
                a[abs(f-k)]=1;
                k=f;
              }

             f=0;
            for(i=1;i<n;i++)
                if( a[i]==0 ){
                    f=1;
                    break;
                    }

          if(f==0)
            printf("Jolly\n");
          else
          printf("Not jolly\n");


}

    return 0;
    }
