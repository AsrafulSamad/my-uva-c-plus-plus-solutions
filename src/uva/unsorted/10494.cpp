#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int call_div(char *number,long div,char *result){
    int len=strlen(number);
    int now;
    long extra;
    char res[1000];
    for(now=0,extra=0;now<len;now++){
        extra=extra*10+(number[now]-'0');

        res[now]=extra/div+'0';
        extra%=div;
        }
    res[now]='\0';
    for(now=0;res[now]=='0';now++);
     strcpy(result,&res[now]);
    if(strlen(result)==0)
      strcpy(result,"0");
    return extra;

    }


int main(){
    char fir[1000],Res[1000],c;
    long sec,re;
    while(scanf("%s %c %ld",fir,&c,&sec)!=EOF){


            re=call_div(fir,sec,Res);
            int len=strlen(Res);
            if(c=='/')
             for(int i=0;i<len;i++) printf("%c",Res[i]);
            else
             printf("%ld",re);

            printf("\n");


        }




    return 0;
    }



