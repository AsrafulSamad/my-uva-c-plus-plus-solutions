#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
int n,i,j,l,k,x,y,m;
char a[201];
scanf("%d",&n);

for(i=1;i<=n;i++){
    scanf("%s",a);
    l=strlen(a);
    x=0;
    printf("Case %d: ",i);
    for(j=0;j<l;){

        m=0;
        y=0;
        if(a[j]>=65&&a[j]<=90)
             for(k=j+1;;k++){

                 if(a[k]>=48&&a[k]<=57)
                   x++;
                 else{
                     for(x=k-1;x>j;x--){
                      y=y+(a[x]-48)*pow(10,m);
                      m++;
                      }
                      break;
                      }

                 }
          for(x=1;x<=y;x++)
           printf("%c",a[j]);
         j=k;


        }


printf("\n");

    }
return 0;
    }
