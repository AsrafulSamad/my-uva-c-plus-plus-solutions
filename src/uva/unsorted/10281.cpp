#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float h,m,s,sp,d,h1=0,m1=0,s1=0,d2=0,sp2=0;
    char x;
     d=0;d2=0;
     while(scanf("%f:%f:%f",&h,&m,&s)!=EOF){
         x=getchar();

         if(x==' ') {
             scanf("%f",&sp);
             d+= fabs((h1+m1/60+s1/3600)-(h+m/60+s/3600))*sp2;
             h1=h;m1=m;s1=s;sp2=sp;
             }
          else{
               d+=fabs((h1+m1/60+s1/3600)-(h+m/60+s/3600))*sp2;
               h1=h;m1=m;s1=s;
               printf("%02.0f:%02.0f:%02.0f %.2f km\n",h,m,s,d);
              }
         }
    return 0;
    }
