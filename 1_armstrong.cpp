#include <iostream>
using namespace std;
#include <cmath>
int arm(int n){
    int orginalnum=n;
    int m=n,c=0,s=0;
    while(n){
        c++;
        n/=10;
    }
    m=orginalnum;
    while(m!=0){
        int r=m%10;
        s+= pow(r,c);
        m/=10;
    }
    if(s==orginalnum){
    return 1;
    }
    else{
    return 0;
    }
}
int main(){
    int n;
    cin>>n;
    if(arm(n)==1){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}