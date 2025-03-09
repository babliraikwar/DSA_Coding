#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int missing(vector<int>p,int n){
    int s=0;
    for(int i=0;i<n; i++){
        s+=p[i];
    }
    int totalsum=(n*(n+1))/2;
    return totalsum-s;
}
int main(){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++)
    cin>>p[i];
    cout<<missing(p,n);
    return 0;
}
//     int n;
//     cin>>n;
//     vector<int>p(n);
//     for(int i=0;i<n;i++)
//     cin>>p[i];
//     int a=1;
//     int c=0;
//     for(auto k:p)
//     while(a)
//     auto t=find(p.begin(),p.end(),a);
//     if(t!=p.end());
//     else{
//         c++;
    
//     cout<<a;
//              break;
//     }
//     a++;
    

// }