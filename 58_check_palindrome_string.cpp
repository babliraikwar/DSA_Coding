#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s,p;
    getline(cin,s);
    p=s;
    reverse(s.begin(),s.end());
    if(s==p)
    cout<<"yes palindrome";
    else
    cout<<"not palindrome";
}