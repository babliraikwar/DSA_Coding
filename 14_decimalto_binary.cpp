#include <iostream>
#include <iostream>
using namespace std;
void decibinay(int n){
    string s="";
    while(n!=0){
        int r=n%2;
        s=to_string(r)+s;
        n/=2;
    }
    cout<<stoi(s);
    
}
int main(){
    int n;
    cin>>n;
    decibinay(n);
    return 0;
}