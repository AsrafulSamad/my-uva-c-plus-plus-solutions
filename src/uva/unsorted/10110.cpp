#include<stdio.h>
#include<math.h>

int main(){

unsigned long n,j;

while(scanf("%lu",&n)&&n){
    j=sqrt(n);
if(j*j==n)
 printf("yes\n");
else
 printf("no\n");

}
 return 0;
}
