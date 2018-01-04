#include<cstdio>

int main(){

 int a[81][5] ,n,kase=1, s,x=1 ;
 int  max,max1;

  while(scanf("%d",&n)&&n  ){

             s=0;
       for(int l=1;l<=n;++l )
           scanf("%d%d%d%d",&a[l][1] ,&a[l][2] ,&a[l][3] ,&a[l][4]   );

      max = -1;

           for(int i=1;i<=n-2;i++ ){

                   // f[a[i][1] ]=f[ a[i][2]]=f[a[i][3] ] =1;

                     s=s  | ( x <<( a[i][1] - 1 )  );
                     s=s  | ( x <<( a[i][2] - 1 )  );
                     s=s  | ( x <<( a[i][3]  - 1 ) );



           for(int j=i+1;j<=n-1;j++ ){

                      if(    (   s  & ( x <<(  a[j][1]  -1 )) ) ||  (  s  & ( x <<( a[j][2] -1 )) )  ||   ( s  & ( x <<( a[j][3] -1  ) ) )    )  ;
                     else{

              // f[a[j][1] ]=f[ a[j][2]]=f[a[j][3] ] =1;

                     s=s  | (x <<( a[j][1] - 1 ));
                     s=s  | (x <<( a[j][2] - 1 ));
                     s=s  | (x <<( a[j][3]  - 1 ));

                      for(int k=j+1;k<=n;k++ ){

                                     max1=a[i][4]+a[j][4]+a[k][4];

                                  if(max1>max ){

                                           if(  ( s  & ( x <<(  a[k][1]  -1 ))  )  ||   ( s  & ( x <<( a[k][2] -1 )) )  ||  ( s  & ( x <<( a[k][3] -1  ) )  )  ) ;
                                       else{
                                            max=max1;
                                        }
                                     }


                      }

                     //f[ a[j][1] ] = f[ a[j][2] ]=f[ a[j][3] ]=0 ;

                      s=s ^ ( x<< (a[j][1]-1  ) );
                      s=s ^ ( x<< (a[j][2]-1  ) );
                      s=s ^ ( x<< (a[j][3]-1  ) );
                     }

               }

     //  f[a[i][1] ]=f[ a[i][2]]=f[a[i][3] ] =0;

                      s = s^ ( x<< ( a[i][1]-1 )  ) ;
                      s = s^ ( x<< (a[i][2]-1 )  ) ;
                      s = s^ ( x<< (a[i][3]-1  ) ) ;

   }

   printf("Case %d: %d\n",kase++,max);

   }


return 0;
    }
