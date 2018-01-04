    #include<stdio.h>
    #include<string.h>
    #include<math.h>
    #include<ctype.h>
    #include<iostream>
    #include<map>
    #include<vector>
    #include<stack>
    #include<queue>
    #include<deque>
    #include<algorithm>
    #include<memory.h>
    #include<stdlib.h>

    using namespace std;

    #define size 100


    int m[size][size],n,a[size][size];

    void inc()
    {
        for (int i=1;i<=n;++i)
            for (int j=1;j<=n;++j)
                m[i][j]=(m[i][j]+1)%10;

      }


    void dec()
    {
        for (int i=1;i<=n;++i)
            for (int j=1;j<=n;++j){
                m[i][j]=(m[i][j]-1)%10;
                  if(m[i][j]<0)
                     m[i][j]=9;
              }
    }


    void row(int p , int q)
    {
        int t;
        for (int j=1;j<=n;j++)
        {
            t=m[p][j];
            m[p][j]=m[q][j];
            m[q][j]=t;
         }
    }

    void col(int p,int q)
    {
        int t;
        for (int j=1;j<=n;j++)
        {
            t=m[j][p];
            m[j][p]=m[j][q];
            m[j][q]=t;
        }
    }


    void trans()
    {
        int i,j;
        for ( i=1;i<=n;++i)
        {
            for ( j=1;j<=n;++j)
                a[i][j]=m[j][i];
          }
        for (i=1;i<=n;i++)
            for (j=1;j<=n;j++)
                m[i][j]=a[i][j];
    }



    int main()
    {

        int k;
        int i,j,l,t,cmd,p,q;
        char c,cm[100],ch[20];

        scanf("%d",&t);

        for (l=1;l<=t;++l)
        {
            cin>>n;
            for (i=1;i<=n;++i)
            {
                cin>>ch;
                for (j=0;j<n;j++)
                    m[i][j+1]=ch[j]-48;
             }

            cin>>cmd;
            while(cmd--)
            {
                 cin>>cm;
                 if(cm[0]=='r' ||cm[0]=='c' )
                    cin>>p>>q;

                  if(cm[0]=='i')
                    inc();
                  else if(cm[0]=='d')
                    dec();
                  else if(cm[0]=='t')
                     trans();
                  else if(cm[0]=='r')
                       row(p,q);
                  else
                       col(p,q);
              }

            printf("Case #%d\n",l );

            for (i=1;i<=n;i++)
            {
                for (j=1;j<=n;j++)
                    printf("%d",m[i][j]);
                printf("\n");
            }
            printf("\n");

        }


        return 0;
    }
