#include<stdio.h>

void cin(unsigned int m){

     unsigned int i,j,c=1,f=0,n;

     for(i=2;;i++){
       for(j=1;j<=i;j++){
            c++;
           if(c==m){
           if(i%2==0)
            printf("TERM %u IS %u",m,j);
           else
             n=j;

           f=1;
           break;

           }

       }

if(f==1)break;


     }

        c=1;f=0;


for(i=2;;i++){
       for(j=i;j>=1;j--){
           c++;
           if(c==m){
           if(i%2==0)
             printf("/%u\n",j);
           else
             printf("TERM %u IS %u/%u\n",m,j,n);
             f=1;
             break;

             }

           }

if(f==1)break;
    }

}

int main(){

unsigned int m;

   while(scanf("%u",&m)!=EOF){
            if(m==1)
             printf("TERM %u IS 1/1\n",m);
            else
             cin(m);

            }
return 0;
    }
