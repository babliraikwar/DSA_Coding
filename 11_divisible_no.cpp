#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string p,r;
    p=r="";    
    string s=to_string(n);
    for(auto k:s){
    if(((int)k-'0')%3==0)
    p+=k;
    else
    r+=k;
    }
cout<<stoi(p+r);
return 0;
}
