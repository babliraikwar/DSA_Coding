#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,gcd;
    cin>>a>>b>>c>>d;
    int x=(a*d)+(c*b);
    int y=b*d;
    for(int i=1; i<+x && i<=y;i++){
        gcd=i;
    }
    cout<<x/gcd<<" "<<y/gcd;
return 0;
}