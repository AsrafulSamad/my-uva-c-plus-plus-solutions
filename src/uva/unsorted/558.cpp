#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#define MAXN 100000
#define INFTY 10000000
using namespace std;

int v, e, bestd[MAXN];

int main () {
  int kase,p,f=0;
    cin >>kase;
 for(p=0;p<kase;p++){
     cin>>v>>e;

vector< vector<int> >el;
vector<int> tmp(3);

    for (int i = 0; i < e; i++) {
        cin >> tmp[0] >> tmp[1] >> tmp[2];
        el.push_back(tmp);
    }
    for (int i = 0; i < MAXN; i++)
        bestd[i] = INFTY;
         bestd[0] = 0;

     for (int i = 0; i < v; i++)
        for (int j = 0; j < el.size(); j++)
            bestd[el[j][1]] = min(bestd[el[j][0]] + el[j][2], bestd[el[j][1]]);


    for (int i = 0; i < e; i++)
        if (bestd[el[i][1]] > bestd[el[i][0]] + el[i][2]) {
                            f=1;break;
                             }




 if(f==1)
 cout << "possible" << endl;
 else if(f==0)
    cout<<"not possible"<<endl;

f=0;
 }
    exit(0);
}
