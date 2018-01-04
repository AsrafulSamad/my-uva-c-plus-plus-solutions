#include<stdio.h>
#include<algo.h>
int main(){
    int t,n,a[500],i,l,s,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++){
        scanf("%d",&n);
        for(i=0;i<n;i++)
           scanf("%d",&a[i]);
sort(a,a+n);
if(n==1)
   printf("0\n");
else if(n==2)
   printf("%d\n",a[1]-a[0]);
else{

    l=n/2;
    s=0;

 for(i=0;i<l;i++)
    s+=a[l]-a[i];
 for(i=l+1;i<n;i++)
    s+=a[i]-a[l];

  printf("%d\n",s);

}
    }
return 0;

}
