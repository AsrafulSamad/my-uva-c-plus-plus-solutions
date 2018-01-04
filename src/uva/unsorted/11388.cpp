#include <iostream>
#include<cstdio>

using namespace std;

int t;
long gcd, lcm;

int main() {
	 scanf("%d",&t);
	 while(t--) {

		scanf("%ld %ld",&gcd,&lcm);


		if (lcm % gcd != 0)
			printf("-1\n");
		else
			printf("%ld %ld\n", gcd, lcm );

	}
	return 0;
}
