#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){

    double x1,x2,x3,y1,y2,y3,h,k,g,f,r,a,c;
    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)==6){

        a=((x3-x1)*(x3-x2)+(y3-y1)*(y3-y2))/((x3-x1)*(y3-y2)-(x3-x2)*(y3-y1));
        g=(-x1-x2-a*y1+a*y2);
        f=(-y1-y2-a*x2+a*x1);
        c=x1*x2+y1*y2+a*x1*y2-a*x2*y1;


printf("x^2 + y^2 ");

if(g<0)
  printf(" - %.3lfx",-1*g);
else
  printf(" + %.3lfx",g);

if(f<0)
  printf(" - %.3lfy",-1*f);
else
  printf(" + %.3lfx",f);

if(c<0)
  printf(" - %.3lf = 0\n",-1*c);
else
  printf(" + %.3lf = 0\n",c);



}

return 0;
    }
