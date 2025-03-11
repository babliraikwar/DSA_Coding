#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,ans=" ";
    getline(cin,s);
    int l=0;
    int j=s.size()-1;
    while(l<=j){
        if(ans.length()>0 && ans[ans.length()-1]==s[l]){
            ans.pop_back();
        }
        else{
            ans.push_back(s[l]);
        }
        l++;
        //j--;
    }
    cout<<ans<<" ";
    return 0;
}