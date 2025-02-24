#include <iostream>
#include <string>
using namespace std;
int binary(int n){
    
    int s=0, x=0;
    while(n!=0){
        int r=n%10;
        s+=(r)*(1<<x++);
        n/=10;
    }
    cout<<s;
}
int main(){
    int n;
    cin>>n;
    binary(n);
    return 0;
}