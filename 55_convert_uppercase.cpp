#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline (cin,s);
    int index=0;
    char currindex;
    while(s[index]!='\0'){
      currindex=s[index];
      if(currindex>='a'&& currindex<='z'){
        s[index]=currindex-'a'+'A';
      }
      index++;
    }
    cout<<s;
return 0;
}