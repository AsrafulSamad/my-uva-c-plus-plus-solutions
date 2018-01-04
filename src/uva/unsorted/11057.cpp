#include<stdio.h>
#include<stdlib.h>
int main(){
    long n,a[10001],m,i,j,c,d,h,g,f;

    while(scanf("%ld",&n)!=EOF){

        for(i=0;i<n;i++)
           scanf("%ld",&a[i]);

        scanf("%ld",&m);

          g=1;
        for(i=0;i<n-1;i++)
          for(j=i+1;j<n;j++){
              if(a[i]+a[j]==m && g==1){

                  c=a[i];
                  d=a[j];
                  h=abs(c-d);
                  g=2;
                  }

           if(a[i]+a[j]==m && g==2){
               f=abs(a[i]-a[j]);
               if(f<h){
                   c=a[i];
                   d=a[j];
                   h=f;
               }
   }

}
  if(c>d){
      f=c;
      c=d;
      d=f;
      }

printf("Peter should buy books whose prices are %ld and %ld.\n\n",c,d);
        }

return 0;
    }
