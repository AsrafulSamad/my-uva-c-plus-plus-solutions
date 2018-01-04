#include<stdio.h>
int main(){
    char a[500],b[500][30];
    int i,j,l,n,k,le[500];

while(gets(a)){
   for(i=0;;i++)
    if(a[i]=='\0')
     break;
    l=i;
    i=0;j=0;k=-1;

    for(i=0;i<l;i++){

     if(a[i]!=' ')
       b[j][++k]=a[i];
     else if(a[i]==' '){
       le[j]=k;
       ++j;
       k=-1;
     }
      }

le[j]=k;

for(i=0;i<=j;i++){
     for(k=le[i];k>=0;--k)
       printf("%c",b[i][k]);
 if(i!=j)
 printf(" ");
}

printf("\n");

}
return 0;
    }
