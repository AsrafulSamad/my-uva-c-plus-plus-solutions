#include<stdio.h>
#include<string.h>

int is_palin(char a[]){
    int l,i;
    l=strlen(a);
      for(i=0;i<l/2;i++)
           if(a[i]!=a[(l-1)-i])
              return 0;
      return 1;

        }



int main(){
    int n,i,j,k,l,m,c1,v,f,c2,p;
    char a[1000],b[1000],c[1000];

    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%s",&a);
        //strcpy(b,a);
        //strrev(b);
      strcpy(b,"\0");
        l=strlen(a);
        k=0;
        for(j=l-1;j>=0;j--)
          b[k++]=a[j];
          b[k]='\0';

      c2=0;
    while(1){

        l=strlen(b);

        c1=0;
        k=0;

        for(j=l-1;j>=0;j--){
            v=(a[j]+b[j]-48*2+c1);
            c1=v/10;
            c[k]=(v%10)+48;
            ++k;
            }

          if(c1>0){
            c[k]=c1+48;
            ++k;
          }

          c[k]='\0';

        //  strrev(c);
          strcpy(a,c);
          l=strlen(a);
          p=0;
          for(j=l-1;j>=0;j--)
            c[p++]=a[j];
            c[p]='\0';

          ++c2;

         f=is_palin(c);
        if(f==1)
            break;

      strcpy(a,c);
      //strrev(c);

    strcpy(b,c);
    strcpy(c,"\0");

          l=strlen(b);
          p=0;
          for(j=l-1;j>=0;j--)
            c[p++]=b[j];
            c[p]='\0';

      strcpy(b,c);

      strcpy(c,"\0");
    }


   printf("%d ",c2);
   printf("%s\n",c);


        }

    return 0;
    }
