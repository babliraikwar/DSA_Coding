#include <iostream>
#include<cstring>
#include <string>
using namespace std;
int main(){
    int hh,mm,ss;
    cout<<"inter formate hh mm ss pm/am";
    cin>>hh>>mm>>ss;
    string ampm;
    cin>>ampm;
    //char arr[3];
    if((hh>=1 && hh<=12) &&( mm>=0 && mm<=59 )&&(ss>=0 && ss<=59)){
       if((ampm=="pm"||ampm=="PM")&&hh!=12){
        hh=hh+12;
    }
   else if ((ampm=="am"||ampm=="AM")&&(hh==12)){
       hh=0;
   }

cout<<hh<<":"<<mm<<":"<<ss;
}
else{
    cout<<"invalid input:";
}
return 0;
}