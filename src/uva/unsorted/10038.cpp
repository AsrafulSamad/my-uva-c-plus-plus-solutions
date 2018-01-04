#include<stdio.h>
#include<stdlib.h>
#include<algo.h>



int main(){
    int n,i,f,a[3000],b[3000];
    while(scanf("%d",&n)!=EOF){
            f=0;

            for(i=1;i<=n;i++)
                scanf("%d",&a[i]);

            for(i=1;i<n;i++)
              b[i]=abs(a[i]-a[i+1]);



           sort(b,b+n);


            for(i=1;i<n;i++)
                if(b[i]!=i){
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
