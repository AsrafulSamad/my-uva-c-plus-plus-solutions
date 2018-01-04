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


void dfs(int ind,int all)
{
	if(ind==all)
	{
		int i;
		putchar(out[0] +'a' );
		for(i=1;i< all ;i++)
		{
			putchar(out[i] +'a' );
		}
		putchar('\n');

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
	int i,j,len;
	char buffer[1000];

    c=0;

	while(  gets(buffer) )
	{
        len = 0;
		for(i=0;i<26;i++)
		{
		    G[i].clear();
			in[i]=mark[i]=0;
		  }

		for(i=0;buffer[i];i++)
			if(buffer[i]!=' ' )
			 {
				mark[buffer[i]-'a' ]=1;
				len++;
			  }

		gets(buffer);

		for(i=0;buffer[i];i++)
			if(buffer[i]!=' ')
				{
					in[buffer[i+2]-'a']++;
					G[buffer[ i]-'a'].push_back(  buffer[i+2]-'a'   ) ;
					i+=2;
				  }

		if(c==1 )
			putchar('\n');
		dfs(0,len);
           c=1;

	}
	return 0;
}
