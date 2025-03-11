#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    int i=0;
    int n=s.size()-1;
    string part;
    cin>>part;
    while(s.find(part)!=string::npos){
        s.erase(s.find(part),part.length());
    }
    cout<<s<<" ";
    return 0;

}
