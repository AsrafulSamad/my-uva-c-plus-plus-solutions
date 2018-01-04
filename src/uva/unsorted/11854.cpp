#include<stdio.h>
int main(){

    unsigned long a,b,c,d;

    while(scanf("%lu%lu%lu",&a,&b,&c)&&a &&b &&c){

        if(a>b && a>c);
        if(b>a && b>c)
            {d=a;
            a=b;
            b=d;
            }

        if(c>a && c>b)
            {
            d=a;
            a=c;
            c=d;
            }

if(a*a==(b*b + c*c))
  printf("right\n");
else
  printf("wrong\n");



}

    return 0;
    }
