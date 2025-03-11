#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string s,p;
    getline(cin,s);
    int index=0;
    char currindex;
    while(s[index]!='\0'){
        currindex=s[index];
        if(currindex>='A'&& currindex<='Z'){
            s[index]=currindex-'A'+'a';
        }
        index++;
    }
    cout<<s;
    return 0;
    // for(auto k:s)
    // if(isupper(k)){
    //     p+=tolower(k);
    
    // }
    
    // cout<<p;
    
}