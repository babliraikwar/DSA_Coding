#include <iostream>
using namespace std;
int fact(int n){
    int f=1;
    while(n!=0){
        f*=f--;
    }
    return f;
}
int strong(int n){
    int s=0;
    while(n!=0){
        int r =n%10;
        s+=fact(r);
        n/=10;
    }
    if(s==n)
    return 1;
    return 0;
}

int main(){
    int a,b;
    cin>>a>>b;
    if(a>b)
    swap(a,b);
    for(int i=a; i<=b; i++){
        if(strong(i)==1){
            cout<<i<<" ";
        }
    }
    return 0;
}