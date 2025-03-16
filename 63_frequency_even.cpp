#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>p(n),q;
    for(int i=0;i<n;i++)
    cin>>p[i];
    map<int,int>f;
    for(auto k:p)
    f[k]++;
    for(auto k:f){
    if(k.second%2==0){
    q.push_back(k.first);
    }
}
for(auto k:q)
cout<<k<<" ";
}