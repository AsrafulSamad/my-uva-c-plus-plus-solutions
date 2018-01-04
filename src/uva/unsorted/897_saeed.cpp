#include<stdio.h>


int main(){

unsigned long num;

int f,i,pre[]={2,3,5,7,11,13,17,31,37,71,73,79,97,113,131,199,311,337,373,733,919,991};


while(scanf("%lu",&num)&&num){

  if(num>=991){
       printf("0\n");
       continue;
       }

if(num<10){
     f=1;
     num++;
  for(i=0;pre[i]<10;num++){
     if(num==pre[i]){
        printf("%d\n",pre[i]);
        f=0;
        break;
        }
     if(num>pre[i]){
        i++;
        num--;
       }
   }

  if(f)printf("0\n");
    continue;

}

if(num<100){f=1;num++;
for(i=4;pre[i]<100;num++){
if(num==pre[i]){printf("%d\n",pre[i]);f=0;break;}
if(num>pre[i]){i++;num--;}}
if(f)printf("0\n");
continue;}

if(num<1000){f=1;num++;
for(i=13;pre[i]<1000;num++){
if(num==pre[i]){printf("%d\n",pre[i]);f=0;break;}
if(num>pre[i]){i++;num--;}}
if(f)printf("0\n");
continue;}

}

return 0;
}
