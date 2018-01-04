#include<stdio.h>
#include<string.h>
int main(){
    char a[21];
    int i,j,l,c,d,f;
    while(gets(a)){


       l=strlen(a);
       d=0;c=0;
       for(i=0;i<l;i++){
        d=c;
        if(f==1)
         d=0;
         f=0;
        if(a[i]=='B'||a[i]=='F'||a[i]=='P'||a[i]=='V')
         c=1;
        else if(a[i]=='C'||a[i]=='G'||a[i]=='J'||a[i]=='K'||a[i]=='Q'||a[i]=='S'||a[i]=='X'||a[i]=='Z')
         c=2;
        else if(a[i]=='D'||a[i]=='T')
         c=3;
        else if(a[i]=='L')
         c=4;
        else if(a[i]=='M' ||a[i]=='N')
         c=5;
        else if(a[i]=='R')
         c=6;
        else
          f=1;


        if(c!=d && f==0){
         printf("%d",c);
         d=c;

        }

       }
       printf("\n");

    }


    return 0;
    }
