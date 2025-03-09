#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int r,m;
    cin>>n;
    string s;
    s= to_string(n);
    char max=*max_element(s.begin(),s.end());
    char min=*min_element(s.begin(),s.end());
    for (int i=0; s[i];i++){
        if(max==i)
        m=i;
        break;
    }
    for(int i=0;s[i];i++){
        if(min==i)
        r=i;
        break;
    }
    swap(s[r],s[m]);
    // (auto k:s)
    cout<<stoi(s);
  return 0;
}