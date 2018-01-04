#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
using namespace std;

bool ahead_of(string left, string right) {

    string a = left+right;
    string b = right+left;
    return a > b;
}

int main() {
    int n;

    while(cin >> n&&n){
    vector<string> items;

    for (int i = 0 ; i != n ; i++) {
        string s;
        cin >> s;
        items.push_back(s);
    }

    sort(items.begin(), items.end(), ahead_of);
    for(int i=0;i<items.size();i++)
       cout<<items[i];
     cout<<endl;

   }

    return 0;
}
