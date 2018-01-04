#include<cstdio>

int main(){

int a[81][5] ,n,kase=1,max,max1;
bool f[10];

while(scanf("%d",&n)&&n  ){


   f[1]=f[2]=f[3]=f[4]=f[5]=f[6]=f[7]=f[8]=f[9]=0;

       for(int l=1;l<=n;++l )
           scanf("%d%d%d%d",&a[l][1] ,&a[l][2] ,&a[l][3] ,&a[l][4]   );

      max = -1;

     int i=1;
       //  for(int i=1;i<=n-2;i++ ){
       while(i<=n-2){

                f[a[i][1] ]=f[ a[i][2]]=f[a[i][3] ] =1;

int j=i+1;

             //for(int j=i+1;j<=n-1;j++ ){
                 while(j<=n-1){

                      if( f[ a[j][1] ] ==1 || f[ a[j][2] ] ==1  || f[ a[j][3] ] ==1 )  ;
                     else{

                            f[ a[j][1] ] = f[ a[j][2] ]=f[ a[j][3] ]=1;
int k=j+1;
                           //for(int k=j+1;k<=n;k++ ){

                             while(k<=n){
                                     max1=a[i][4]+a[j][4]+a[k][4];

                                  if(max1>max ){

                                           if( f[ a[k][1] ] ==1  || f[ a[k][2] ] ==1 ||  f[ a[k][3] ] ==1  ) ;
                                       else
                                            max=max1;
                                     }
                 k++;
                             }

                     f[ a[j][1] ] = f[ a[j][2] ]=f[ a[j][3] ]=0;
                     }
                     j++;
               }

       f[a[i][1] ]=f[ a[i][2]]=f[a[i][3] ] =0;

i++;
      }


printf("Case %d: %d\n",kase++,max);


   }


return 0;
    }
