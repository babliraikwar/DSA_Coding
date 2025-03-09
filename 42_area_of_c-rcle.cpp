#include <iostream>
using namespace std;
//#define PI=3.14;
int main(){
    float radius,diameter,area,PI=3.14;
    cin>> diameter;
    radius=float(diameter/2);
    area=PI*radius*radius;
    cout<<area;
    return 0;

}