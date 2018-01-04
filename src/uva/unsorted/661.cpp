#include<stdio.h>
int main()
{
    bool mark[25];
    int dev[25],capa,max,i,n,m,val,t=0;
    while(1){

        scanf("%d %d %d",&n,&m,&capa);

        if(!n && !m && !capa)break;

        for(i=1;i<=20;i++)
           mark[i]=0;

        for(i=1;i<=n;i++)
            scanf("%d",&dev[i]);

          i=val=max=0;

        for(;i<m;i++){
          scanf("%d",&n);

         if(mark[n]==0){
            mark[n]=1;
            val+=dev[n];
            if(val>max)max=val;
            }
        else{
            mark[n]=0;
            val-=dev[n];
          }

        }
        printf("Sequence %d\n",++t);

        if(max<=capa)
            printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n\n",max);
        else
            printf("Fuse was blown.\n\n");

    }


    return 0;
}
