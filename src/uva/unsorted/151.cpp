#include<stdio.h>
#define MAX 100

int queue[MAX];
int e,f,r;

void push(int i){
    r++;
    e++;
    if(r>=MAX)
      r=1;
      queue[r]=i;

    }

 int pop(void){
     e--;
     int i=queue[f];
     f++;
    if(f>=MAX)
     f=1;
    return i;
}

int joshups(int n, int v){
    register int i;
    e=n;
  for(i=1;i<=n;i++)
    queue[i]=i;
  f=1;
  r=n;
  i=0;
if(n>1)
  pop();

 while(e!=1){
     if(i!=v){
         i++;
         push(pop());
      }
     else{
         pop();
         i=0;
         }
     }

    return queue[f];
    }



int main(){
    int i,m;
    scanf("%d",&i);
    while(i){
        m=0;
        while((joshups(i,m++))!=13);
        printf("%d",m);
        putchar('\n');
        scanf("%d",&i);
        }

    return 0;
    }



