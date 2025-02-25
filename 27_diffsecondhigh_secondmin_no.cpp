#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n=8776754;
    string s= to_string(n);
    char x= *max_element(s.begin(),s.end());
    s.erase(remove(s.begin(),s.end(),x),s.end());
    char max=*max_element(s.begin(),s.end());
    char y=*min_element(s.begin(),s.end());
s.erase(remove(s.begin(),s.end(),x),s.end());
char min=*min_element(s.begin(),s.end());
int r=abs(max-min);
char p=char(r+48);
auto t=find(s.begin(),s.end(),p);
if(t!=s.end())
cout<<"yes";
else
cout<<"no";

}