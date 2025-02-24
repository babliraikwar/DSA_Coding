#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int palindrom(int n){
    
    string s=to_string(n);
    reverse(s.begin(),s.end());
    if(stoi(s)==n)
    return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
    if(palindrom(n)==1){
        cout<<"yes plindrom";
    }
    else{
        cout<<"not plindrom";
    }
    return 0;

}