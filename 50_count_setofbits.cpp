#include <iostream>
using namespace std;
int setbit(int n){
    if(n==0)
    return 0;
    return (n&1)+setbit(n>>1);
}
int main(){
    int n;
    cin>>n;
    cout<<setbit(n);
    return 0;
}