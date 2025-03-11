#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=9;
    int c=0;
    for(int i=1;i<=n;i++){
        if(i%num==0){
        c++;
        cout<<i<<" "<<endl;
    }

    }
    cout<<"count="<<c;
}