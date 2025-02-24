#include <iostream>
#include <string>
using namespace std;
int even2odd1(int n){
    string s=to_string(n);
    for(int i=2; s[i];i++)
    if(((int)s[i-2]-'0')%2==0 && ((int)s[i-1]-'0')%2==0)
        if(s[i]%2)
        return 1;
        return 0;
    
}
    int main(){
    int n;
    cin>>n;
    cout<<even2odd1(n);
    return 0;
    }
        
        

    