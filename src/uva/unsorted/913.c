#include<stdio.h>
int main(){
long long s1,s2,p,m,n1,n2,n;
while(scanf("%lld",&m)==1){
       n=(m-1)/2;
       p=(n*(2+(n-1)*2))/2;
       n1=p+m;
       n2=n1-3;
       s1=(n1*(2+(n1-1)*2))/2;
       s2 = (n2*(2+2*(n2-1)))/2;
       printf("%lld\n",s1-s2);
}
 return 0;
}
