#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>p(n),q;
    for(int i=0;i<n;i++){
    cin>>p[i];
    }
    sort(p.begin(), p.end(),greater<int>());
    map<int,int>f;
    for(auto k:p)
    f[k]++;
    for(auto k:f)
    q.push_back(k.first);
    cout<<q[2];
    return 0;
}