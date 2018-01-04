#include<stdio.h>
int main(){
   long a,c,b,s[1000],i,j;

   while(1){
       scanf("%ld",&a);
       if(a==0) break;
        b=a;c=0,i=0;
        while(a!=0){
           if(a%2==1) c=c+1;
             s[i]=a%2;
             a=a/2;
             i++;
            }
         printf("The parity of ");

         for(j=i-1;j>=0;j--)
          printf("%ld",s[j]);

         printf(" is %ld (mod 2).\n",c);

          }

return 0;
    }
