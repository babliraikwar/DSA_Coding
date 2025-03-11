#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++)
     cin>>p[i];
     int i=0;
     int l=0,j=n-1;
     while(l<=j){
        if(p[i]==0){
        swap(p[i],p[l]);
        i++;
        l++;
        }
     else if(p[i]==2){
        swap(p[i],p[j]);
        j--;
     }
     else{
        i++;
     }
     for(auto k:p)
     cout<<k<<" ";
     return 0;
}