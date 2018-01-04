#include<cstdio>

int main(){
     long t,n,a[110][110],b[110][110],i,j,k,f,l1,l,m;
     char ch;
     scanf("%ld",&t);

 for(int l1=1;l1<=t;++l1){

       ch=getchar();
       ch=getchar();
       ch=getchar();
       ch=getchar();
       scanf("%ld",&n);

       f=1;

       for(i=1;i<=n;++i)
         for(j=1;j<=n;++j){
           scanf("%ld",&a[i][j]);
           if(a[i][j]<0)
              f=0;
         }
           m=n/2;

          if(n%2==1)
           m=n/2+1;

         for(i=1;i<=m && f;++i){
             for(j=1;j<=n && f;++j){
               if(a[i][j]!=a[n-i+1][n-j+1])
                  f=0;
               }
             }



     if(f)
       printf("Test #%d: Symmetric.\n",l1);
     else
       printf("Test #%d: Non-symmetric.\n",l1);



      }

    return 0;

 }
