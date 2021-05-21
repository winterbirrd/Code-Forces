#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    int i=(n-1);
    while(i>(n/2)){
        cout<<a[i]<<" ";
        i--;
    }
    cout<<endl;
    while(i>=0){
        cout<<a[i]<<" ";
        i--;
    }

    return 0;
}