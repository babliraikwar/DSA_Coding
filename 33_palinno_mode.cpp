#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int palindrome(int n){
    string s=to_string(n);
    reverse(s.begin(),s.end());
    if(stoi(s)==n)
    return  1;
    return 0;
}
vector<int>modulo(vector<int>p,int n){
    vector<int>q,r;
    int c=0;
    for(auto k:p){
        if(palindrome(k))
        q.push_back(k);
        c++;
    }
    for(auto k:q)
    r.push_back(k%c);
    return r;
}
int main(){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++)
    cin>>p[i];
    vector<int>r=modulo(p,n);
    for(auto k:r)
    cout<<k<<" ";
    return 0;
}