#include <iostream>
#include <string>
using namespace std;
void fibbo(int n){
    int a=0,c, b=1;
    
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    //return b;
}
int main(){
    int n;
    cin>>n;
    fibbo(n);
    return 0;
}