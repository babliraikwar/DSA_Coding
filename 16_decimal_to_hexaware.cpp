#include <iostream>
#include <string>
using namespace std;
int hexa_deci(int n){
    string s="";
    while(n!=0){
        int r=n%16;
        if(r<=9){
            s=to_string(r)+s;
        }
        else{
           char c=char(55+r+7);
           s=c+s;
        }
        n/=16;
    }
    cout<<stoi(s);
}
int main(){
    int n;
    cin>>n;
    hexa_deci(n);
    return 0;
}