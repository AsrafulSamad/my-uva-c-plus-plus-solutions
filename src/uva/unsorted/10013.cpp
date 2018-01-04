
      #include<iostream>

      #include<string>



      using namespace std;

      int main()

      {

      long l1,k=0,i,j,m,n;

      long tens=0, ones, ans;

      char s_num1[1000002], s_num2[1000002];
      cin>>n;


     for(i=1;i<=n;i++){


       k=0;tens=0;

       cin>>m;


      for(j=0;j<m;j++){

      cin>>s_num1[j];

      cin>>s_num2[j];

      }

      l1=m-1;

      for(j=l1;j>=0;j--){

      ans = (int) s_num1[j] + (int) s_num2[j] + tens - 2*48;

      ones=ans%10;

      tens=ans/10;

      s_num1[j]=ones + 48;

      k++;

      }


      for(j=0;j<m;++j)
         cout<<s_num1[j];
      cout<<endl;
   if(i!=n)
    cout<<endl;
     }

      return 0;

      }
