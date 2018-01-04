#include<cstdio>


int a[20005]   ;

int main(){

int r,s,p,q,kase,p1,q1;
scanf("%d",&r);

for(kase=1;kase<=r;++kase ){
    scanf("%d",&s );

int max= -9999;

for( int i=1;i<s;++i )
       scanf( "%d",&a[i]  );

for(int i=2;i<s;++i){
    if(a[i] + a[i-1] >a[i]  )
           a[i]=a[i]+a[i-1];
    }

for(int i=1;i<s;++i  ){
    if( max<a[i]   ){
           max=a[i];
           p=q=i;
          while(a[p] >=0  &&  p>=1 )
            p--;
        }

    else  if(max==a[i]  ){
           p1=q1=i;
           while(a[p1] >=0 && p1>=1 )
               p1--;
         if((q1-p1)> (q-p ) ){
             p=p1;q=q1;
             }

         }
  }



if(max<=0 )
  printf("Route %d has no nice parts\n",kase);
else
printf("The nicest part of route %d is between stops %d and %d\n",kase,p+1,q+1);

  }

    return 0;
    }
