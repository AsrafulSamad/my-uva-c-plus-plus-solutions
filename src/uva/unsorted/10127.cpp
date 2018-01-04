#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{

unsigned long int n;

while(scanf("%lu",&n)!=EOF)
{
long double a=1;
unsigned long int t=0;

if(n%2==0 || n%5==0)
 cout<<"0"<<endl;
else{
while(fmod(a,n)!=0)
{
a=(a*10)+1;
a=fmod(a,n);
t++;
}

cout << (t+1) << endl;
}
n=0;


}

return 0;
}
