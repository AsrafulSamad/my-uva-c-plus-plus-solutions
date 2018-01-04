#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> a(10010);

int main(){
      int n,sum,k,f,sum1,sum2;

      while(scanf("%d",&n)&&n ){
            f=1;sum1=0;

            for(int i=1;i<=n;++i){
                scanf("%d",&a[i]);
                sum1+=a[i];
                if(a[i]<0)
                f=0;
                }

           if(sum1%2==1)
               f=0;
           if(n==1 && a[1]>0 )
              f=0;

            sort(a.begin()+1 , a.begin()+n+1 );
            reverse( a.begin()+1, a.begin()+n+1 );

                sum1=sum2=0;

         for(int k=1;k<=n;++k){
                for(int i=1;i<=k;++i)
                  sum1+=a[i];
                for(int i=k+1;i<=n;++i)
                    sum2+=min(a[i],k);
                 sum2+=k*(k-1);
               if(sum1>sum2){
                 f=0;
                break;
                 }
             }

          if(f)
            printf("Possible\n");
          else
           printf("Not possible\n");


  }



    return 0;
    }
