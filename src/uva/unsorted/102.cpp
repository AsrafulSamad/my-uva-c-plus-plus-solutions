#include<stdio.h>

int main(){

    long a[10],c,d[7],f,i=0;
    a[0]=0,d[0]=0;
   while(scanf("%ld %ld %ld %ld %ld %ld %ld %ld %ld",&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9])==9){

	d[1]=a[2]+a[3]+a[4]+a[5]+a[7]+a[9];
    d[2]=a[2]+a[3]+a[4]+a[6]+a[7]+a[8];
    d[3]=a[1]+a[2]+a[5]+a[6]+a[7]+a[9];
	d[4]=a[1]+a[2]+a[4]+a[6]+a[8]+a[9];
	d[5]=a[1]+a[3]+a[5]+a[6]+a[7]+a[8];
	d[6]=a[1]+a[3]+a[4]+a[5]+a[8]+a[9];

       c=1;
       f=d[1];

       for(i=2;i<=6;i++){
	     if(f>d[i]){
	       f=d[i];
	       c=i;
	     }
       }

         if(c==1)
	  printf("BCG %ld\n",f);
         if(c==2)
	  printf("BGC %ld\n",f);
         if(c==3)
	  printf("CBG %ld\n",f);
	     if(c==4)
	  printf("CGB %ld\n",f);
	     if(c==5)
	  printf("GBC %ld\n",f);
	     if(c==6)
	  printf("GCB %ld\n",f);

}

    return 0;
    }
