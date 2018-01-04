#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char a[27],c[100][100],d;
    int b[27],i,j,k,l,x,n;

    for(i=0;i<26;i++){
       b[i]=0;
       a[i]=65+i;

    }

scanf("%d",&n);

   for(i=0;i<=n;i++){
      gets(c[i]);
    l=strlen(c[i]);
    for(x=0;x<l;x++){
        d=toupper(c[i][x]);
     if(d>=65&&d<=90){
        j=d-65;
        b[j]+=1;

            }
            }
   }


     for(i=0;i<25;i++)
       for(j=i+1;j<26;j++){

           if(b[i]<b[j]){
               k=b[j];
               d=a[j];
               b[j]=b[i];
               b[i]=k;
               a[j]=a[i];
               a[i]=d;
               }

           if(b[i]==b[j] && a[i]>a[j]){
               k=b[j];
               d=a[j];
               b[j]=b[i];
               b[i]=k;
               a[j]=a[i];
               a[i]=d;
           }


           }

  for(i=0;i<26;i++){
    if(b[i]==0)
      break;
    printf("%c %d\n",a[i],b[i]);

    }

return 0;
    }
