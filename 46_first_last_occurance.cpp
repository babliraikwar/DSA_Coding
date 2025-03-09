#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first=-1,last=-1;
    vector<int>p(n);
    for(int i=1;i<=n;i++)
    cin>>p[i];
    int x;
    cin>>x;
    for(int i=1;i<=n;i++)
        if(x==p[i])
        if(first==-1)
        first=i;
        else
        last=i;
        
    
      if(first!=-1)
      cout<<first<<" " <<last;
      
      else
      cout<<"no";
    
    return 0;

}