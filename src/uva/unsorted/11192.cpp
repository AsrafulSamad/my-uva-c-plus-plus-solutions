#include<stdio.h>
#include<string.h>

int main(){
    int n,i,j,l,k,p;
    char a[103];

    while(scanf("%d",&n) && n){

        scanf("%s",a);

        l=0;
        while(a[l++]!='\0');

        k=l;
        l=l-1;
        i=l/n;


for(k=1;k<=n;++k){
    j=k*i-1;
    for(p=j;p>=i*(k-1);--p)
      printf("%c",a[p]);
}

if(n*i!=l){
  for(p=n*i;p<l;++p)
    printf("%c",a[p]);

    }
printf("\n");

}
 return 0;

}
