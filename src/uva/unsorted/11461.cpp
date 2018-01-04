#include<stdio.h>
#include<math.h>

int main(){

    double a,b,c,m,n;

while(scanf("%lf %lf",&a,&b)){
     if(a==0 && b==0) break;
    n=ceil(sqrt(a));
    m=floor(sqrt(b));
     printf("%.0lf\n",m-n+1);


    }
return 0;
    }
