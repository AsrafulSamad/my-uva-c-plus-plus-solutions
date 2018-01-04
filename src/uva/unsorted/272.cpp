#include<stdio.h>
#include<string.h>
int main(){
    int i,c=1;
    char a[100];
    while(gets(a)){
        i=0;


           for(;;){
               if(a[i]=='\0')
               break;
               if(a[i]=='"'&&c==1){
                   printf("``");
                   c=2;
                   }
               else if(a[i]=='"'&& c==2){
                   printf("''");
                   c=1;
                   }
               else
                   printf("%c",a[i]);


               i++;
               }

printf("\n");
        }

    return 0;
    }
