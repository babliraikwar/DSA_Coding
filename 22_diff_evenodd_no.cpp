#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
    int n;
    cin>>n;
    string odd="",even="";
    string s=to_string(n);
    for(auto k:s)
    if(((int)k-'0'%2==0))
    even+=k;
    else
    odd+=k;
    int x=stoi(even);
    int y=stoi(odd);
    cout<<abs(x-y);
    return 0;


}