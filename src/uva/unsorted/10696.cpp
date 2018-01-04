#include<stdio.h>
int main(){
long n;

while(1){
    scanf("%ld",&n);
    if(n==0)break;
    if(n<=100)
    printf("f91(%ld) = 91\n",n);
    if(n>=101)
       printf("f91(%ld) = %ld\n",n,n-10);

    }


    return 0;
    }
