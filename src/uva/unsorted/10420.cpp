#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<map>


using namespace std;


map <string, int> M;

int main()
{
    int n;
    string Name ;
    char a[260];
    cin>>n;

   map <string, int> :: iterator it;

    for (int i = 0; i<n; i++)
       {

       cin>> Name ;
       cin.getline(a,256);

       it=M.find(Name);

      if(it!=M.end())
          ++M[Name];
      else
          M[Name]=1;

        }


    for( it = M.begin(); it != M.end(); it++)
        cout<< (*it).first<<" " <<(*it).second<<"\n" ;

    return 0;


}




