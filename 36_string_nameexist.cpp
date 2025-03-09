#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>p(n);
    for(int i=0;i<n;i++)
    cin>>p[i];
    //getline(cin,p[i]);
    string s;
    //getline(cin,s);
    cin>>s;
    auto t=find(p.begin(),p.end(),s);
    if(t!=p.end()){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}