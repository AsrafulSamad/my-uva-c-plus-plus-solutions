#include<stdio.h>
int main(){


float m,h,hAngle,mAngle,angle;

while(scanf("%f:%f",&h,&m)){
if(!h&&!m)break;

hAngle=h*30+(m*30.0)/60;
mAngle=m*6;
angle=hAngle-mAngle;
if(angle<0)
 angle=angle*(-1);
if (angle>180) angle=360-angle;

printf("%.3f\n",angle);

}


return 0;
    }
