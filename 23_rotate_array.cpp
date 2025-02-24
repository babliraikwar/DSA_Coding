#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotate(vector<int>p,int n,int k){
    vector<int>q(n);
    for(int i=0;i<n;i++){
        int j=(i+k)%n;
        q[j]=p[i];
    }
    for(auto k:q)
    cout<<k<<" ";
}
int main(){
    int n;
    cin>>n;
    vector<int >p(n);
    for(int i=0;i<n; i++)
    cin>>p[i];
    int k;
    cin>>k;
    rotate(p,n,k);
    // reverse(p.begin(),p.end());
    // reverse(p.begin(),p.begin()+k);
    // reverse(p.begin()+k,p.end());
    // for(auto k:p)
    // cout<<k<<" ";
    return 0;
}