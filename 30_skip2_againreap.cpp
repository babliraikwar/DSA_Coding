#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++)
    cin>>p[i];
    for(int i=0;i<n;i=i+3)
    {
        cout<<p[i]<<" ";
    }
    return 0;
}