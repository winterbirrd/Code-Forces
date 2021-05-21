#include<bits/stdc++.h>
using namespace std;

int main() {

    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }

    // long long n, k;
    // cin>>n>>k;
    // double long * a = new double long[n];
    // long long i=0, j=1;
    // while(j<=n){
    //     a[i] = j;
    //     j+=2;
    //     i++;
    // }
    // long long y=2;
    // while(i<n){
    //     a[i]=y;
    //     y+=2;
    //     i++;
    // }
    // cout<<a[k-1];

    return 0;
}