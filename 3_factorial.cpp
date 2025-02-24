#include <iostream>
using namespace std;
int fact(int n){
    int f=1;
    while(n!=0){
        f*=n--;
    }
    return f;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}