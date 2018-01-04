#include<stdio.h>
int main(){
    int p,q,r,j,u[2003],v[2003],k=0,b,a,c[5],d[5],i;


while(1){

 scanf("%d%d%d",&p,&q,&r);
if(p==0&&q==0&&r==0)break;


for(j=1;j<=r;++j)
   scanf("%d%d",&u[j],&v[j]);

   scanf("%d%d",&a,&b);


c[0]=a;d[0]=b;
c[1]=a;d[1]=b+1;
c[2]=a;d[2]=b-1;
c[3]=a+1;d[3]=b;
c[4]=a-1;d[4]=b;

int f=1;

for(i=0;i<5;++i){

 if(c[i]>=0 && c[i]<p && d[i]>=0 && d[i]<q){
    f=0;
   for(j=1;j<=r;++j){

    if(c[i]==u[j] || d[i]==v[j]){
          f=1;break;
           }
    }
    if(f==0)
      break;

  }

}

if(f==0)
 printf("Case %d: Escaped again! More 2D grid problems!\n",++k);
else
 printf("Case %d: Party time! Let's find a restaurant!\n",++k);

}

return 0;
    }
