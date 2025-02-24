#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string p,q;
    p=q="";
    string s=to_string(n);
    for(auto k:s)
    if(((int)k-'0')==0)
    q+=k;
    else
    p+=k;
    cout<<stoi(p+q);
    return 0;

}
