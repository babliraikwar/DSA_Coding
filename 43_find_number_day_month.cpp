#include <iostream>
#include <string.h>
using namespace std;
int main(){
int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
char date[11];
char*token;
cin>>date;
cout<<"Enter inpute formate dd-mm-yyyy";
token=strtok(date,"-");
token=strtok(NULL," ");
int i=stoi(token);
cout<<"month has day"<<arr[i-1];
return 0;
}