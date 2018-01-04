#include <iostream>
#include <math.h>
using namespace std;

int main() {
unsigned long long int n,x,y;
while (cin >> n) {
x = (sqrt(1+8*n)-1)/2;
y = x*(x+1)/2;
if (y == n) cout << "1/" << x << endl;
else cout << (x + 1)-(n-y)+1 << "/" << 1+(n-y)-1 << endl;
}
return 0;
}
