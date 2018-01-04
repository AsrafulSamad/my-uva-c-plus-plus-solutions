#include<stdio.h>
int main(){
    int a,b,c,d;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4){
        if(a==0 && b==0 &&c==0 && d==0)break;



        if(a>c || (a==c&&b>d)){
               b=b+(a*60);
               d=d+((24+c)*60);

               printf("%d\n",d-b);
        }
        else if((a<c)||(a==c && d>b)){
            b=b+(a*60);
            d=d+(c*60);

           printf("%d\n",d-b);
        }
         else if(a==c && b==d)
           printf("%d\n",d-b);


}

    return 0;
    }
