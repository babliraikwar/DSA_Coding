#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    s=to_string(n);
    char last=s.size()-1;
    swap(s[0],s[last]);
    for(auto k:s)
    cout<<k<<" ";
    return 0;
}