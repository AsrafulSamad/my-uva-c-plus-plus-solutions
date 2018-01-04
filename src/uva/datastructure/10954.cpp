#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

#define MAX 100001
#define INF (1<<20)
#define pii pair< int, int >
#define pb(x) push_back(x)


struct t{
     int a;
    };

struct comp{
bool operator()(t &t1 , t & t2){
          if( t1.a>t2.a )
                  return 1;
         return 0;
    }
 };

priority_queue< t , vector<t>, comp > Q;

int main(){

   t v[5010],z1,z2;

  int n=5;
  int i,x;
  long totalsum;
  t  sum;

  while(scanf("%d",&n)&&n ){
        i=0;

     while(i<n){
      scanf("%d",&v[i].a);
      Q.push(v[i] );
       ++i;
      }

    totalsum=0;

   while(!Q.empty()){
       z1=Q.top();
       Q.pop();
       z2=Q.top();
       Q.pop();

       sum.a=z1.a+z2.a;
       totalsum+=sum.a;

       if(!Q.empty())
          Q.push(sum);
       }

printf("%ld\n",totalsum);

}


    return 0;
    }

