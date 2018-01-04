#include<iostream>
#include<cmath>


using namespace std;

long long gcd(long long a,long long b);
long long lcm(long long a,long long b);


int main()
{
    long long n;
    while(cin>>n && n)
    {
        if(n==1)
        {
            cout<<1<<' '<<1<<endl;
            continue;
        }
        long long f[1000000];
        int cnt = 0;
        int ans = 0;
        // find all factor
        for(long long i = 1 ; i*i <= n ;i++)
        {
            if(n%i==0)
            {
                long long div = n/i;
                f[cnt++] = i;
                if(div!=i)f[cnt++] = div;
            }
        }

        for(int i = 0 ; i< cnt ; i++)
            for(int j = i+1 ;j < cnt ;j++)
            {
                long long l = lcm(f[i],f[j]);
                if(l==n)ans++;
            }
        cout<<n<<' '<<ans+1<<endl;
    }
    return 0;
}


long long gcd(long long a,long long b)
{
    if(a < b)swap(a,b);
    while(b)
    {
        long long t = a%b;
        a = b;
        b = t;
    }
    return a;
}


long long lcm(long long a,long long b)
{
    return a/gcd(a,b)*b;
}
