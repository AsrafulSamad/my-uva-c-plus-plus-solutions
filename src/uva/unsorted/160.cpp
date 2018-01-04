#include<cstdio>
#include<cmath>
#include<iostream>
#include<stdlib.h>

using namespace std;

int prime[] = {  0, 2, 3 , 5 , 7 , 11 , 13 , 17 , 19 , 23 , 29 , 31 , 37 , 41 , 43 , 47 , 53 , 59 ,
61 , 67 , 71 , 73 , 79 , 83 , 89 , 97  };
int p_count[26];

int main(){

         int i,n,m,l;

         while(scanf("%d",&n) && n ){
                              for(i=1;i<=25;i++ )
                                  p_count[i]=0;

                               for(i=2;i<=n;i++  ){
                                          m=i;
                                          int s=int(sqrt(m));
                                          for(int j=1;prime[j]<=s;j++ ){
                                                     if(m%prime[j]== 0 ){
                                                             while(m%prime[j]==0){
                                                                 m/=prime[j];
                                                                 ++p_count[j];
                                                                 }

                                                         }

                                              }
                                             if(m>1){
                                                 for(int j=1;j<=25;j++)
                                                     if(prime[j]==m ){
                                                         ++p_count[j];
                                                         break;
                                                         }
                                                 }

                                   }

                 for(i=1;i<=25;i++)
                      if(p_count[i]!=0 ){
                          l=i;
                           }

              printf("%3d! =",n);
              if(l>15){
                 for(i=1;i<=15;i++){
                   printf("%3d",p_count[i] );
                  }
                   printf("\n      ");
                   for(;i<=l;i++ )
                      printf("%3d",p_count[i]);
                   printf("\n");

                   }
                else{

                    for(i=1;i<=l;i++)
                        printf("%3d",p_count[i] );
                     printf("\n");

                    }


           }

return 0;
    }
