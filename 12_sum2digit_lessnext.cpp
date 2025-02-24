#include <iostream>
#include <string>
using namespace std;
int sumless(int n){
    string s=to_string(n);
    for(int i=2; s[i];i++)
    if(((int)s[i-2]-'0')+ ((int)s[i-1]-'0')<=(s[i]))
        return 1;
        return 0;
    
}
    int main(){
    int n;
    cin>>n;
    cout<<sumless(n);
    return 0;
    }
        
        

    