#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s=to_string(n);
    char x=*max_element(s.begin(),s.end());
    s.erase(remove(s.begin(),s.end(),x),s.end());
    char y=*max_element(s.begin(),s.end());
    cout<<y-'0';
    // for(auto k:s)
    // cout<<k<<" ";
    return 0;

}