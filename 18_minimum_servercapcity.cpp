#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++)
    cin>>p[i];
    sort(p.begin(),p.end());
    vector<int>Q(n);
    for(int i=0;i<n;i++)
    cin>>Q[i];
    sort(Q.begin(),Q.end(),greater<int>());
    int s=0;
    for(int i=0; i<n; i++){
       s+=p[i]*Q[i];
        
    }
    cout<<s;
    return 0;
    
}