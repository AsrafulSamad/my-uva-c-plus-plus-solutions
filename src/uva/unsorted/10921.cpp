#include<stdio.h>
#include<string.h>
int main(){
    char a[31],c;
    int i;
    while(gets(a)){
        i=0;
        while(a[i]!='\0'){
             if(a[i]>=65 && a[i]<=67)
              c='2';
             else if(a[i]>=68 && a[i]<=70)
              c='3';
             else if(a[i]>=71 && a[i]<=73)
              c='4';
             else if(a[i]>=74 && a[i]<=76)
              c='5';
             else if(a[i]>=77 && a[i]<=79)
              c='6';
            else if(a[i]>=80 && a[i]<=83)
              c='7';
             else if(a[i]>=84 && a[i]<=86)
              c='8';
             else if(a[i]>=87 && a[i]<=90)
              c='9';
             else
              c=a[i];

            printf("%c",c);
            i++;

            }

     printf("\n");
        }
    return 0;
    }
