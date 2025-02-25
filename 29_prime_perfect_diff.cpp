#include <iostream>
#include <algorithm>
using namespace std;
int prime(int n){
    if(n<2)
    return 0;
    for(int i=2;i<n/2;i++)
    if(n%i==0)
    return 0;
    return 1;
}
int perfect(int n){
    int s=0;
    for(int i=1;i<=n/2;i++){
    if(n%i==0)
    s+=i;
    }
    if(s==n)
    return 1;
    return 0;
}
int main(){
    int a,b;
    cin>>a>>b;
    if(prime(a)==1 && prime(b)==1){
        if(perfect(abs(a-b)))
        cout<<"yes";
    else
    cout<<"no";
    }
    else
    cout<<"no";
    return 0;
}