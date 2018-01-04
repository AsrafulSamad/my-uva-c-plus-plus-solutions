#include<stdio.h>
#include<string.h>
int s,c,r,l,j;

void one(int k ){
       if(k==1 || k==s+2 || k==r){
           for(int i=1;i<=s+2;i++)
              printf(" ");
              }
       else{
          for(int i=1;i<s+2;i++)
               printf(" ");
       printf("|");
       }
if(j!=l-1)
       printf(" ");
    }

 void two(int k){
     if(k==1 || k==s+2 || k==r){
         printf(" ");
         for(int i=1;i<=s;i++)
           printf("-");
         printf(" ");
         }
     else if(k>1 && k<s+2){
          for(int i=1;i<s+2;i++)
               printf(" ");
       printf("|");
         }
     else
        {
           printf("|");
          for(int i=1;i<s+2;i++)
               printf(" ");

            }
if(j!=l-1)
 printf(" ");
     }

void three(int k){
    if(k==1 || k==s+2 || k==r){
         printf(" ");
         for(int i=1;i<=s;i++)
           printf("-");
         printf(" ");
         }
    else {
          for(int i=1;i<s+2;i++)
               printf(" ");
       printf("|");
         }
if(j!=l-1)
 printf(" ");
}

void four(int k){
    if(k==1 || k==r)
         for(int i=1;i<=s+2;i++)
              printf(" ");
    else if(k==s+2){
         printf(" ");
         for(int i=1;i<=s;i++)
           printf("-");
         printf(" ");
        }
    else if(k>s+2 && k<r){
         for(int i=1;i<s+2;i++)
               printf(" ");
         printf("|");
        }
    else {

          printf("|");
         for(int i=1;i<=s;i++)
           printf(" ");
         printf("|");

        }
if(j!=l-1)
 printf(" ");
    }
void five(int k){
    if(k==1 || k==s+2 || k==r){
         printf(" ");
         for(int i=1;i<=s;i++)
           printf("-");
         printf(" ");
         }
     else if(k>1 && k<s+2){
          printf("|");
          for(int i=1;i<s+2;i++)
               printf(" ");

         }
     else
        {
        for(int i=1;i<s+2;i++)
               printf(" ");
          printf("|");
            }
if(j!=l-1)
            printf(" ");
    }
void six(int k){
    if(k==1 || k==s+2 || k==r){
         printf(" ");
         for(int i=1;i<=s;i++)
           printf("-");
         printf(" ");
         }

  else if(k>1 && k<s+2){
          printf("|");
          for(int i=1;i<s+2;i++)
               printf(" ");

         }
    else {

          printf("|");
         for(int i=1;i<=s;i++)
           printf(" ");
         printf("|");

        }
if(j!=l-1)
 printf(" ");
    }

void seven(int k){
    if(k==1){
         printf(" ");
         for(int i=1;i<=s;i++)
           printf("-");
         printf(" ");
        }

    else if(k==s+2 || k==r)
           for(int i=1;i<=s+2;i++)
              printf(" ");
    else{
        for(int i=1;i<s+2;i++)
               printf(" ");
         printf("|");

        }
if(j!=l-1)
        printf(" ");
    }
void eight(int k){
       if(k==1 || k==s+2 || k==r){
         printf(" ");
         for(int i=1;i<=s;i++)
           printf("-");
         printf(" ");
         }
       else {

          printf("|");
         for(int i=1;i<=s;i++)
           printf(" ");
         printf("|");

        }
if(j!=l-1)
 printf(" ");
    }
 void zero(int k){
       if(k==1 || k==r){
         printf(" ");
         for(int i=1;i<=s;i++)
           printf("-");
         printf(" ");
         }
       else if(k==s+2)
          for(int i=1;i<=s+2;i++)
              printf(" ");
       else {

          printf("|");
         for(int i=1;i<=s;i++)
           printf(" ");
         printf("|");

        }
if(j!=l-1)
 printf(" ");
     }

void nine(int k){
     if(k==1 || k==s+2 || k==r){
         printf(" ");
         for(int i=1;i<=s;i++)
           printf("-");
         printf(" ");
         }
    else if(k>1&&k<s+2){

          printf("|");
         for(int i=1;i<=s;i++)
           printf(" ");
         printf("|");

        }
    else
     {
  for(int i=1;i<s+2;i++)
               printf(" ");
       printf("|");

         }
if(j!=l-1)
 printf(" ");
    }

int main(){
    int i;
    char n[11];
    while(scanf("%d %s",&s,n)){
       if(s==0 && n[0]=='0')
         break;
       c=s+2;r=2*s+3;
      l=strlen(n);
       for(i=1;i<=r;i++){
         for(j=0;j<l;j++){

           if(n[j]=='1')
             one(i);
           else if(n[j]=='2')
             two(i);
           else if(n[j]=='3')
             three(i);
           else if(n[j]=='4')
             four(i);
           else if(n[j]=='5')
             five(i);
           else if(n[j]=='6')
             six(i);
           else if(n[j]=='7')
             seven(i);
           else if(n[j]=='8')
             eight(i);
           else if(n[j]=='0')
             zero(i);
           else
             nine(i);
           }
        printf("\n");
           }
    printf("\n");
        }


    return 0;
    }
