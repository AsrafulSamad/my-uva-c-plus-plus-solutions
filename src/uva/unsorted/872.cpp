#include <stdio.h>
#include<iostream>
#include<vector>

using namespace std;

#define max  27

vector<int> G[ max ] ;
int in[max];
char   out[100];
bool  mark[max] ;
int c ;

//char G[26][26];
char cache[100];


void dfs(int ind,int all)
{
	if(ind==all)
	{
		int i;
		putchar(out[0] +'A' );
		for(i=1;i< all ;i++)
		{
			putchar(' ');
			putchar(out[i] +'A' );
		}
		putchar('\n');
		c++;
	}
	else
	{
		int i,j;
		for(i=0;i<26;i++)
			if( mark[i]&&!in[i]  )
			{
				mark[i]=0;
				for(j=0;j<G[i].size();j++)
					if(mark[ G[i][j]  ]     )
						in[G[i][j] ]--;
				out[ind]=i ;
				dfs(ind+1,all);
				mark[i]=1;
				for(j=0;j<G[i].size();j++)
					if(mark[G[i][j] ] )
						in[G[i][j] ]++;
			}
	}
 }


int main()
{
	int i,n,j,len;
	scanf("%d",&n);
	char buffer[1000];
	getchar();

	while(n--)
	{
		len = 0;
		for(i=0;i<26;i++)
		{
		    G[i].clear();
			in[i]=mark[i]=0;
		  }

		getchar();
		gets(buffer);

		for(i=0;buffer[i];i++)
			if(buffer[i]!=' ' )
			 {
				mark[buffer[i]-'A' ]=1;
				len++;
			  }

		gets(buffer);

		for(i=0;buffer[i];i++)
			if(buffer[i]!=' ')
				{
					in[buffer[i+2]-'A']++;
					G[buffer[ i]-'A'].push_back(  buffer[i+2]-'A'   ) ;
					i+=2;
				  }

		c= 0;

		dfs(0,len);

		if(!c)
			puts("NO");
		if(n)
			putchar('\n');

	}
	return 0;
}
