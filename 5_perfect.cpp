#include <iostream>
using namespace std;
int perfect(int n){
    int m=n;
    int s=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
        s+=i;
        }
    }
    if(s==n)
    return 1;
    return 0;
}
int main(){
    int c=0;
    int a,b;
    cin>>a>>b;
    if(a>b)
    swap(a,b);
    for(int i=a;i<=b;i++){
    if(perfect(i)==1){
        c++;
    cout<<i<<" ";
    }
    }
    return 0;
}