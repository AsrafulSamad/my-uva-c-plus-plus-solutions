#include<iostream.h>

int main(){
    int n,i,a,b,sum,j;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        sum=0;
        for(j=a;j<=b;j++){
            if(j%2==1)
              sum=sum+j;


            }
        cout<<"Case "<<i<<": "<<sum<<endl;
}

    return 0;
    }
