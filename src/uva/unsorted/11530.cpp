#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int i,l,n,c,j;
    char a[101],b;

    scanf("%d",&n);
    b=getchar();
    for(i=1;i<=n;i++){

        l=0;
        while((b=getchar())!='\n')
            a[l++]=b;

        c=0;


        for(j=0;j<l;j++){
         if(a[j]=='a'||a[j]=='d'||a[j]=='g'||a[j]=='j'||a[j]=='m'||a[j]=='p'||a[j]=='t'||a[j]=='w'||a[j]==' ')
           c=c+1;
         else if(a[j]=='b'||a[j]=='e'||a[j]=='h'||a[j]=='k'||a[j]=='n'||a[j]=='q'||a[j]=='u'||a[j]=='x')
           c=c+2;
         else if(a[j]=='c'||a[j]=='f'||a[j]=='i'||a[j]=='l'||a[j]=='o'||a[j]=='r'||a[j]=='v'||a[j]=='y')
           c=c+3;
          else if(a[j]=='s'||a[j]=='z')
           c=c+4;
            }

  printf("Case #%d: %d\n",i,c);

        }


    return 0;
    }
