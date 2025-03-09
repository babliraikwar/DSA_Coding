#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0; i<n ;i++)
    cin>>p[i];
   int last=n-1;
   swap(p[0],p[last]);
   for(auto k:p)
   cout<<k<<" ";
   return 0;
}