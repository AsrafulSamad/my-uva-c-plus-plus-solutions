#include<stdio.h>
#include<string.h>

int main(){
    int i,j,p,k,l1,l2,w,n;
    char a[25],b[25],c;

    scanf("%d",&n);
    c=getchar();

for(i=1;i<=n;i++){

j=0;
while((c=getchar())!='\n')
   a[j++]=c;

l1=j;

j=0;
while((c=getchar())!='\n')
    b[j++]=c;

l2=j;

   p=0;w=0;k=0;
   k=0;


   for(j=0;j<l1;j++){
     if(a[j]==' ' && b[k]!=' '){
         p=1;
       continue;
       }
     else if(a[j]!=b[k]){
         w=1;
         break;
         }

       k++;
       }
   if((k-1)!=(l2-1))
      w=1;


if(p==0&&w==0)
 printf("Case %d: Yes\n",i);
else if(w==1)
 printf("Case %d: Wrong Answer\n",i);
else if(p==1)
 printf("Case %d: Output Format Error\n",i);

        }

return 0;
    }
