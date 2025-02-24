#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    string s,q="";
    getline(cin,s);
    map<char,int>f;
    for(auto k:s)
    f[k]++;
    for(auto k:f){
    if(k.second==1)
    q+=k.first;
    }
    cout<<q<<" ";
    return 0;
}