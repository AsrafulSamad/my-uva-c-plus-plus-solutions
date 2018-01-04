#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int a[105],n,t,i,j,max,x,y,bs = 0,dbs;
  char c,buf[300];

  scanf("%d",&t);
    c=getchar();
  //cin.getline(buf,300);
  while(t--){

        max=1;c='1';j=0;bs=0;

        cin.getline(buf,300);

     while( sscanf( buf + bs, " %d%n", &x, &dbs ) == 1 )
       {
        bs += dbs;
        a[++j]=x;
        }


   if(j==0 || j==1) {
      printf("0\n");
      continue;
     }
   n=j;

    for(i=1;i<n;++i)
       for(j=i+1;j<=n;++j){
          x=a[i];y=a[j];
       while(y) y ^= x ^= y ^= x %= y;

       if(x>max)
         max=x;
     }

 printf("%d\n",max);

  }
    return 0;

}
