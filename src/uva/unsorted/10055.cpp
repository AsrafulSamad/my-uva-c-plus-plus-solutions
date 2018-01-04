#include<stdio.h>
int main(void){
unsigned long int n,m;
while(scanf("%lu %lu",&n,&m)!=EOF) 
{
if(n<m)
  printf("%lu\n",m-n);
else 
  printf("%lu\n",n-m);
}

return 0;
}
