#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s= to_string(n);
    char max=*max_element(s.begin(),s.end());
    char min=*max_element(s.begin(),s.end());
    // for (auto k:s){
    //     if(max==k)
    //     max=k;
    //     break;
    // }
    // for(auto k:s){
    //     if(min==k)
    //     min=k;
    //     break;
    //}
    swap(s[min],s[max]);
    for (auto k:s)
    cout<<k;
  return 0;
}