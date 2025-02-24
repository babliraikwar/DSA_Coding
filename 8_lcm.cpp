#include <iostream>
using namespace std;
int lcm(int a,int b){
    int x=a;
    int y=b;
    if(a==b)
    return a;
    while(a!=b){
        if(a<b)
        a+=x;
        else
        b+=y;
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
    return 0;
}