#include <iostream>
#include <vector>
#include<math.h>
using namespace std;

void QuickSort(vector <unsigned long >&v, int left, int right) {
        if (left >= right) return;              // Define the stop condition
        int pivotValue = v[right];
        int storeIndex = left;                  // Record the final pivot position
        for (int i=left; i<right; i++) {
                if (v[i] <= pivotValue) {
                        // Swap v[i] and v[storeIndex]
                        int temp = v[i];
                        v[i] = v[storeIndex];
                        v[storeIndex] = temp;
                        storeIndex++;
                }
        }
        // Move pivot to its final position
        int temp = v[storeIndex];
        v[storeIndex] = v[right];
        v[right] = temp;
        QuickSort(v, left, storeIndex-1);               // Sort the left part
        QuickSort(v, storeIndex+1, right);              // Sort the right part
}

int main() {
        vector <unsigned long int> v;

int m;
for(int i=0;i<=31;++i)
 for(int j=0;j<=20;++j)
  for(int k=0;k<=13;++k)
   for(int l=0;l<=11;++l){
     if(pow(2,i)*pow(3,j)*pow(5,k)*pow(7,l)<=2000000000)
          v.push_back((unsigned long )(pow(2,i)*pow(3,j)*pow(5,k)*pow(7,l)));
       }

QuickSort(v, 0, v.size()-1);

//sort(v.begin(),v.end());

while(scanf("%d",&m)&&m){
if(m%100==11 || m%100==12 || m%100==13)
printf("The %dth humble number is %lu.\n",m,v[m-1]);
else if(m%10==1)
printf("The %dst humble number is %lu.\n",m,v[m-1]);
else if(m%10==2)
printf("The %dnd humble number is %lu.\n",m,v[m-1]);
else if(m%10==3)
printf("The %drd humble number is %lu.\n",m,v[m-1]);
else
printf("The %dth humble number is %lu.\n",m,v[m-1]);


    }




}
