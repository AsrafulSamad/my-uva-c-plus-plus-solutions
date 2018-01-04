#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<string>
#include<cstring>


using namespace std;

int main(){

   int n,m,c,vs,vq,vp;

    while(cin>>n){

        bool s=1,q=1,pq=1,im=0;
        stack<int> ss;
        queue<int> qq;
        priority_queue<int> pqq;

       while(n--){

              cin>>c>>m;

              if(c==1){
                  if(s)
                     ss.push(m);
                  if(q)
                     qq.push(m);
                  if(pq)
                     pqq.push(m);
                  }
               else{

                 if(s){
                        if( ss.empty()||ss.top()!=m  )
                               s=0;
                        else
                              ss.pop();

                       }



                  if(q){

                         if( qq.empty()||qq.front()!=m )
                            q=0;
                         else
                             qq.pop();

                        }


                   if(pq){

                         if(pqq.empty()||pqq.top()!=m)
                            pq=0;
                          else
                              pqq.pop();
                       }



                  if(!s && !q && !pq)
                     im=1;

                     }

                }




          if(im)
            cout<<"impossible\n";
          else if(s&q || s&pq || q&pq )
             cout<<"not sure\n";
          else if(s)
             cout<<"stack\n";
          else if(q)
             cout<<"queue\n";
          else
             cout<<"priority queue\n";
        }



    return 0;
    }
