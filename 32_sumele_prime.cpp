#include <iostream>
#include <vector>
using namespace std;
int sum(int n){
    int s=0;
    while(n){
        int r=n%10;
        s+=r;
        n/=10;
    }
    return s;
}
int prime(int n){
    for(int i=2;i<n/2;i++)
    if(n%i==0)
    return 0;
    return 1;
}
vector<int>findele(vector<int>p,int n){
vector<int>q;
    for(auto k:p){
    if(prime(sum(k))){
    q.push_back(k);
     }
    }
    return q;
}
int main(){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++)
    cin>>p[i];
    
    vector<int>q=findele(p,n);
    for(auto k:q)
    cout<<k<<" ";

}