#include<stdio.h>

int main(){
int k,i,j,m,t,c,a[1001];

while(scanf("%d",&m)!=EOF){

for(j=0;j<m;j++)
    scanf("%d",&a[j]);
c=0;
for(k=0;k<m-1;k++){
  for(j=k+1;j<m;j++){
        if(a[k]>a[j]){
        c++;
        }
  }                 
}
printf("Minimum exchange operations : %d\n",c);

}
return 0;
    }
