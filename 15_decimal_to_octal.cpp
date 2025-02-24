#include <iostream>
#include <string>
using namespace std;
int deciOctal(int n){
    string s="";
    while(n!=0){
        int r=n%8;
        s=to_string(r)+s;
        n/=8;
    }
    cout<<stoi(s);
}
int main(){
    int n;
    cin>>n;
    deciOctal(n);
    return 0;
}