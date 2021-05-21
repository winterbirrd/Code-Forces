#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a,n;
    cin>>n;

    if(n%2==0) a=n/2;
    else a=((n+1)/2)*(-1);
    cout<<a<<endl;
    
    return 0;
}


// int fun(int n){
//     if(n==0){
//         return 0;
//     }
//     else{
//         return fun(n-1) + pow(-1, n)*n;
//     }

// }

// int main() {
//     int n;
//     cin>>n;
//     cout<<fun(n);
    
//     return 0;
// }