#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>p(n),q,r,t;
    for(int i=0;i<n;i++)
    cin>>p[i];

    for(auto k:p)
    if(k%3==0)
    q.push_back(k);
    else
    r.push_back(k);
 
map<int ,int>f;
for(auto k:r)
f[k]++;
for(auto k:f)
t.push_back(k.first);

t.insert(t.begin(),q.begin(),q.end());
for(auto k:t)
cout<<k<<" ";
return 0;

}
  