#include<stdio.h>
#include<string.h>
int s;
void fuc(unsigned long long int n){
      s=0;
      while(n!=0){
          s+=n%10;
          n=n/10;

        }

        if(s<10)
        printf("%d\n",s);
        else
         fuc(s);
}


int main(){
unsigned long long int a;
while(1){

  scanf("%I64d",&a);
  if(a==0)
    break;
fuc(a);

    }



    return 0;
    }
