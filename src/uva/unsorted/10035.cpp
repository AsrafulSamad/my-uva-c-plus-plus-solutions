
#include<stdio.h>
#include<string.h>

int main(){
char n[15],m[15] ;
int i,j,k,l,a[15],b[15],x,c;

while(scanf("%s %s",n,m))
{
if((n[0]=='0')&&(m[0]=='0'))
     break;


i=strlen(n);
j=strlen(m);
k=i-1;

for(x=0;x<i,k>=0;x++)
  a[x]=n[k--]-48;

k=j-1;
for(x=0;x<j,k>=0;x++)
  b[x]=m[k--]-48;


k=0;
c=0;
l=0;


while(l<i&&l<j){
x=a[l]+b[l]+c;
++l;
if(x>=10){
    c=x/10;
    ++k;
  }
else
  c=0;
}



while(l<i){
	x=a[l]+c;
	++l;
	if(x>10)
	{
	c=x/10;
	++k;
	}
    else
     c=0;
	}



while(l<j){
	x=b[l]+c;
	++l;
	if(x>10)
	{
	c=x/10;
	++k;
	}
	else
     c=0;
	}


if(k==0)
  printf("NO carry operation.\n");
else if(k==1)
  printf("%d carry operation.\n",k);
else
  printf("%d carry operations.\n",k);
}

return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>
int main()
{
	unsigned int s,h,a,o,n;
	unsigned int i,j,t,x,y;
	char *p,*q;
	char c[11],b[11];

	while(scanf("%u %u",&x,&y))
	{
		if((x==0) && (y==0))
			break;

		i=x;
		t=y;
		o=0;
		while(i!=0)
		{
			j=i%10;
			i=i/10;
			o++;
		}
		c[o]='\0';
		while(o!=0)
		{
			j=x%10;
			c[o-1]=j+'0';
			x=x/10;
			o--;
		}

		o=0;
		while(t!=0)
		{
			j=t%10;
			t=t/10;
			o++;
		}
		b[o]='\0';
		while(o!=0)
		{
			j=y%10;
			b[o-1]=j+'0';
			y=y/10;
			o--;
		}
		if(strlen(c)>strlen(b))
			s=strlen(c);
		else
			s=strlen(b);

		p=c+strlen(c)-1;
		q=b+strlen(b)-1;

		n=0;
		a=0;
		while(s!=0)
		{
			if(*q<0 || *q==0)
			{
				if(*q==0)
				{
					q++;
					*q=0+'0';
				}
				else
					*q=0+'0';
			}
			else if(*p<0 || *p==0)
			{
				if(*p==0)
				{
					p++;
					*p=0+'0';
				}
				else
					*p=0+'0';
			}
			h=((*p-'0')+(*q-'0'));
			h=a+h;

			if(h>9)
			{
				a=h/10;
				n++;
			}
			else
				a=0;
			p--;
			q--;
			s--;
		}
		if(n==0)
			printf("No carry operation.\n");
		else if(n==1)
			printf("%u carry operation.\n",n);
		else if(n>1)
			printf("%u carry operations.\n",n);
	}
return 0;
}











