#include<stdio.h>
#include<stdlib.h>

long gcd(long a,long b){
    if(b==0) return a;
    return gcd(b,a%b);
    }

int main(){
    long n,i,x1,x2,x3,x4,y1,y2,y3,y4,d,a,b,c;
    double m1,m2,x,y,a1,b1,c1,a2,b2,c2,p,q;
  scanf("%ld",&n);

 printf("INTERSECTING LINES OUTPUT\n");

for(i=1;i<=n;i++){
m1=98.1;m2=100.3;
 scanf("%ld %ld %ld %ld %ld %ld %ld %ld",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);

a1=y1-y2; b1=x2-x1; c1=x1*y2-y1*x2;
a2=y3-y4; b2=x4-x3; c2=x3*y4-y3*x4;

a=abs((long)a1);b=abs((long)b1);c=abs((long)c1);

if(a>=b)
 d=gcd(a,b);
else
 d=gcd(b,a);

if(d>=c)
  d=gcd(d,c);
else
  d=gcd(c,d);

a1=a1/d; b1=b1/d;c1=c1/d;

a=abs((long)a2);b=abs((long)b2);c=abs((long)c2);

if(a>=b)
  d=gcd(a,b);
else
  d=gcd(b,a);
if(d>=c)
  d=gcd(d,c);
else
  d=gcd(c,d);

a2=a2/d; b2=b2/d; c2=c2/d;

if(b1!=0)
 m1=-(a1/b1);
if(b2!=0)
 m2=-(a2/b2);


p=abs((long)c1);
q=abs((long)c2);


if(x1==x2 && y1==y2 && x3==x4 && y4==y4)
  printf("LINE\n");
else if( (m1==m2 && p==q) || (b1==0 && b2==0 && p==q))
  printf("LINE\n");
else if((m1==m2 && p!=q) || (b1==0 && b2==0 && q!=p))
  printf("NONE\n");
else {

    x=(b1*c2-b2*c1)/(a1*b2-a2*b1);
    y=(c1*a2-c2*a1)/(a1*b2-a2*b1);

 printf("POINT %.2lf %.2lf\n",x,y);

    }

}
   printf("END OF OUTPUT\n");
    return 0;
    }
