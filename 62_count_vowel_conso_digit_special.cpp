#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int vowel=0,consonant=0,digit=0,special=0;
    string vowels="aioueAIOUE";
    string digits="1234567890";
    string specials="!$%^&*@#";
    for (auto k:s){
        if(vowels.find(k)!=string::npos){
            vowel++;
        }
        else if(digits.find(k)!=string::npos){
            digit++;
        }
        else if(specials.find(k)==string::npos && digits.find(k)==string::npos){
            consonant++;
        }
        else{
            special++;
        }
    }
    cout<<"vowel="<<vowel<<" , "<<"consonant="<<consonant<<" ,"<<"digit="<<digit<<","<<"special="<<special;

}