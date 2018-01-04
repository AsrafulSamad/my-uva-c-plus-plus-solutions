#include<stdio.h>
int main(){
int n;
float h,u,d,f,u1,s,x;
while(scanf("%f %f %f %f",&h,&u,&d,&f)&&h){
    n=0;s=0;u1=u;

x=(float)u*(f/100);

    while(1){
          ++n;
           s=s+u1;
            if(s>h){
              printf("success on day %d\n",n);
              break;
              }
            s=s-d;
            u1=u1-x;
            if(u1<0) u1=0;
            if(s<0){
             printf("failure on day %d\n",n);
               break;
               }

        }

    }

return 0;
    }
