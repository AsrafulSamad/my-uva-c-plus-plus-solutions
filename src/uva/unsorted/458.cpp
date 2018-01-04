#include<stdio.h>
#include<string.h>
int main(){
    char a[101];
    int i,l;

    while(scanf("%s",&a)!=EOF){

     l=strlen(a);
     for(i=0;i<l;i++)
       printf("%c",a[i]-7);
     printf("\n");

    }

    return 0;
    }
