#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>q;
    vector<string>p(n);
    for(int i=0;i<n;i++)
    cin>>p[i];
    int c=0;
    for(auto k:p){
    for(auto s:k)
    if(s=='a'|| s=='A' && s=='o'||s=='O'&& s=='e'||s=='E'&& s=='u'||s=='U'&& s=='i'||s=='I'){
        c++;
        q.push_back(c);
    }
    for(auto k:q)
    cout<<k<<" ";
    }
    return 0;
}