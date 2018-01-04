#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){

unsigned long int c=0,i,j,L,e;

char a[200],s;


while(1){
c=0;
scanf("%s",a);

if(a[0]=='0')
  break;

L=strlen(a);
i=L;

for(j=0;j<L;j++){

s=a[j];
e=s-'0';	
c=e*(pow(2,i)-1)+c;
i--;
}

printf("%lu\n",c);

}


return 0;

}
