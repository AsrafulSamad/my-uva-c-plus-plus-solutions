#include<stdio.h>
#include<string.h>
char f[10000];
char factorial[1010][10000];
int c[10];
void multiply(int k){

    int cin,sum,i;
    int len=strlen(f);
    cin=0;
    i=0;

    while(i<len){
        sum=cin+(f[i]-'0') *k;
        f[i]=(sum%10)+'0';
        i++;
        cin=sum/10;
        }
    while(cin>0){
        f[i++]=(cin%10)+'0';
        cin/=10;

        }
    f[i]='\0';
    for(int j=0;j<i;j++)

        factorial[k][j]=f[j];
        factorial[k][i]='\0';


    }

    void fac(){
        int k;
        strcpy(f,"1");
        for(k=2;k<=1000;k++)
           multiply(k);



        }

    void print(int n){

        int i;
        int len=strlen(factorial[n]);
        //printf("%d!\n",n);
        for(i=len-1;i>=0;i--){
            //printf("%c",factorial[n][i]);
            if(factorial[n][i]=='0') c[0]=c[0]+1;
            else if(factorial[n][i]=='1') c[1]=c[1]+1;
            else if(factorial[n][i]=='2') c[2]=c[2]+1;
            else if(factorial[n][i]=='3') c[3]=c[3]+1;
            else if(factorial[n][i]=='4') c[4]=c[4]+1;
            else if(factorial[n][i]=='5') c[5]=c[5]+1;
            else if(factorial[n][i]=='6') c[6]=c[6]+1;
            else if(factorial[n][i]=='7') c[7]=c[7]+1;
            else if(factorial[n][i]=='8') c[8]=c[8]+1;
            else if(factorial[n][i]=='9') c[9]=c[9]+1;

            }

        printf("%d! --\n",n);

        for(int l=0;l<=9;l++){
            if(l==5) printf("\n");
            if(l==0 || l==5) printf("   (%d)%5d",l,c[l]);
            else   printf("    (%d)%5d",l,c[l]);


            }



        printf("\n");



        }

    int main(){

       int n;


       factorial[0][0]='1';
       factorial[1][0]='1';
       fac();
       while(scanf("%d",&n)==1){
       c[0]=0;c[1]=0;c[2]=0;c[3]=0;c[4]=0;
       c[5]=0;c[6]=0;c[7]=0;c[8]=0;c[9]=0;

           print(n);
           }





        return 0;
        }







