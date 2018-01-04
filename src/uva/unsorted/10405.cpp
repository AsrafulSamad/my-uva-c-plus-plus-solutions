#include <stdio.h>
#include <string.h>
#define MAX 1000

char X[MAX],Y[MAX];
int i,j,m,n,c[MAX][MAX],b[MAX][MAX];

int LCSlength() {

m=strlen(X);
n=strlen(Y);

for (i=1;i<=m;i++) c[i][0]=0;
for (j=0;j<=n;j++) c[0][j]=0;
for (i=1;i<=m;i++)
for (j=1;j<=n;j++) {
if (X[i-1]==Y[j-1]) {
c[i][j]=c[i-1][j-1]+1;
b[i][j]=1; /* from north west */
}
else if (c[i-1][j]>=c[i][j-1]) {
c[i][j]=c[i-1][j];
b[i][j]=2; /* from north */
}
else {
c[i][j]=c[i][j-1];
b[i][j]=3; /* from west */
}
}
return c[m][n];
}


int main() {
while (1) {
 gets(X);
if (feof(stdin)) break; /* press ctrl+z to terminate */
 gets(Y);
printf("%d\n",LCSlength()); /* count length */

}
return 0;
}
