#include<stdio.h>
int main(){
    int s,d,a,b,t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&s,&d);

        if(s<d || (s+d)%2!=0){
         printf("impossible\n");
         continue;
        }

        b=(s-d)/2;
        a=s-b;
        printf("%d %d\n",a,b);


        }

return 0;
    }
