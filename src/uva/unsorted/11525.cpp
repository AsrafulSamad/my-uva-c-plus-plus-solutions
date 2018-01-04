#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#define INT_MAX 2147483647
#define INT_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL unsigned long long
using namespace std;


int main ()
{
    int testCase;
    scanf ("%d", &testCase);

    while ( testCase-- ) {
        int k;
        scanf ("%d", &k);

        vector <int> sequence;

        for ( int i = 1; i <= k; i++ )
            sequence.push_back (i);

        bool space = false;
        int input;

            scanf ("%d", &input);
            printf ("%d", sequence [input]);
            sequence.erase (sequence.begin () + input);


        for ( int i = 1; i < k; i++ ) {
            scanf ("%d", &input);
            printf (" %d", sequence [input]);
            sequence.erase (sequence.begin () + input);
        }

        printf ("\n");
    }

	return 0;
}


