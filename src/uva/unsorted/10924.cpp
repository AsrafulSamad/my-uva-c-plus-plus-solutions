#include<stdio.h>
#include<ctype.h>
#include<string.h>


int j,flag;
void  isprime(int n){
     flag=0;
     for(j=2;j<=n/2;j++){
         if(n%j==0){
             flag=1;
             break;
           }
     }
    if(flag==0)
      printf("It is a prime word.\n");
    else
      printf("It is not a prime word.\n");

         }


int main(){

     char a[21];
     int i,sum,n;
     while(gets(a)){
        n=strlen(a);
        sum=0;
        for(i=0;i<n;i++){
            if(isupper(a[i]))
               sum+=a[i]-'A'+27;
            else
               sum+=a[i]-'a'+1;


            }

isprime(sum);

         }
    return 0;
    }
