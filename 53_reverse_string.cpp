#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int i=0;
    int j=s.size()-1;
    while(i<j){
      swap(s[i],s[j]);
      i++;
      j--;
    }
    cout<<s;
}