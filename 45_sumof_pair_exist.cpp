#include <iostream>
#include <vector>
using namespace std;
int sumpair(vector<int>p,int n,int x){
    for(int i=0;i<n;i++)
      if(p[i]+p[i+1]==x)
      return 1;
      return 0;
 }

int main(){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++)
    cin>>p[i];
    int x;
    cin>>x;
    cout<<sumpair(p,n,x);
    return 0;
}