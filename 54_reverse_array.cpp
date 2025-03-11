#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++)
    cin>>p[i];
    //sort(p.begin(),p.end(),greater<int>());
    int i=0;
    int j=n-1;
    while(i<j){
        swap(p[i],p[j]);
        i++;
        j--;
    }
    for(auto k:p)
    cout<<k<<" ";
    return 0;
}
   
    
