#include<stdio.h>
#include<math.h>

int main(){

int x1,x2,x3,x4,y1,y2,y3,y4,i,j,t,n;
long area;

scanf("%d",&t);

for(j=1;j<=t;j++){
 scanf("%d",&n);

 scanf("%d %d %d %d",&x1,&y1,&x3,&y3);


 for(i=2;i<=n;i++){

   scanf("%d %d %d %d",&x2,&y2,&x4,&y4);
      if(x1<x2) x1=x2;
      if(y1<y2) y1=y2;
      if(x3>x4) x3=x4;
      if(y3>y4) y3=y4;
}

x2=x3; y2=y1; x4=x1; y4=y3;

if(x1>=x3 || y1>=y3)
  area=0;
else
  area=(long)(sqrt(pow((x1-x2),2)+pow((y1-y2),2))*sqrt(pow((x1-x4),2)+pow((y1-y4),2)));

 printf("Case %d: %ld\n",j,area);


}

return 0;

}
