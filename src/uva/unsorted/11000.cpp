#include<stdio.h>
int main(){
    long M,F,temp,y;
    while(1){
        scanf("%ld",&y);
        if(y==-1) break;
        M=0,F=1;
        while(y--){
           temp=M;
           M=M+F;
           F=temp+1;
        }
printf("%ld %ld\n",M,M+F);
}
return 0;
    }
