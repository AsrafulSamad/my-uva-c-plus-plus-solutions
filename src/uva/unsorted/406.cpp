#include<stdio.h>


int prime(int n){

    if (n==1) return 1;
    if (n==2)  return 1;
    if (n%2==0) return 0;
    for(int i=3;i*i<=n;i+=2)
      if(n%i==0)
         return 0;
      return 1;
    }

int main(){

int m,i,j,k,p[171],a,b;
p[0]=0;
k=1;
for(j=1;j<=1000;j++){
i=prime(j);
if(i==1){
  p[k++]=j;
}
}

while(scanf("%d %d",&a,&b)!=EOF){
      i=0;
      printf("%d %d:",a,b);
      for(;;){
           i=i+1;
          if(p[i]>a){
             i=i-1;
             break;
             }
          if(i==169)
             break;
      }
         k=i;


      if(i%2==1){
           i=i/2+1;
           m=b*2-1;
        if(m>=k)
           for(j=1;j<=k;j++)
            printf(" %d",p[j]);
        else{
               m=m/2;
          for(j=i-m;j<=i+m;j++)
            printf(" %d",p[j]);

 }        }
      else{
           i=i/2;
           m=b*2;
         if(m>=k)
           for(j=1;j<=k;j++)
            printf(" %d",p[j]);
         else{  m/=2;
           for(j=i-m+1;j<=i+m;j++)
             printf(" %d",p[j]);
         }
      }
printf("\n\n");
}

return 0;
}


