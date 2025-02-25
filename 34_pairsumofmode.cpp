#include <iostream>
#include <vector>
using namespace std;
int lastdigit(vector<int>p,int n){
    int s=0;
    for(int i=0;i<n;i++){
        int x=p[i]+p[i+1];
        //s=x%10;
        s+=x%10;
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++)
    cin>>p[i];
    cout<<lastdigit(p,n);
    return 0;
}