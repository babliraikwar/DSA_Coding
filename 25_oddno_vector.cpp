#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>p(n),q;
    for(int i =0;i<n;i++){
        cin>>p[i];
    }
    for(auto k:p)
    if(k%2)
    q.push_back(k);

    for(auto k:q)
    cout<<k<<" ";
    return 0;
}