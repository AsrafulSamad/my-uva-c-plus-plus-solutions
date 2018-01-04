#include<stdio.h>
#include<string.h>
unsigned long long fac(int m){
    if(m==0)
      return 1;
    return m*fac(m-1);
    }



int main(){
    int i,j,n,l,b[26],d,k;
    unsigned long long m,h,g;
    char a[21],c[26];

    c[0]='A';

    for(i=1;i<26;i++)
      c[i]=c[i-1]+1;

    scanf("%d",&n);

    for(i=1;i<=n;i++){

         scanf("%s",&a);
         l=strlen(a);
         h=0;

         for(j=0;j<26;j++)
            b[j]=0;

         for(j=0;j<26;j++){
          d=0;
           for(k=0;k<l;k++)
             if(c[j]==a[k])
               b[j]=++d;
           }

          m=fac(l);

          for(j=0;j<26;j++)
             if(b[j]>1)
               m/=fac(b[j]);
           printf("Data set %d: %llu\n",i,m);

}

return 0;
    }
