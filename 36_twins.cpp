#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int *a = new int[n];
    int sum=0, count=0, sumx=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a, a+n);
    sum=sum/2;
    for(int i=n-1; i>=0; i--){
        sumx+=a[i];
        count++;
        if(sumx>sum){
            break;
        }
    }
    cout<<count;
    

    return 0;
}