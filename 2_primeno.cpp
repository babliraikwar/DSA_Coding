#include <iostream>
using namespace std;
int prime(int n){
    for(int i=2;i<=n/2;i++)
        if(n%i==0)
         return 0;
         return 1;
}
int main(){
    int c=0;
    int a,b;
    cin>>a>>b;
    if(a>b)
    swap(a,b);
    for(int i=a;i<=b;i++){
    if(prime(i)==1){
        c++;
    cout<<i<<" ";
    }
    }
    cout<<c;
    return 0;
}

// int prime(int n)
// {
//     int f=0;
//     for(int i=2;i<n/2;i++){
//         if(n%i==0)
//         {
//             printf("not prime");
//             f=1;
//             break;
//         }
//     }
//     if(f==0){
//         printf("prime");
//     }
// }
// int main(){
// int prime();  
// int n;
// scanf("%d",&n);
//  prime(n);
// }