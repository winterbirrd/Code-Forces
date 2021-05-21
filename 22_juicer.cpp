#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, b, d;
    cin>>n>>b>>d;
    int j=0, w=0;
    int *arr=new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]<=b){
            j+=arr[i];
            if(j>d){
                w++;
                j=0;
            }
        }
    }
    cout<<w;

    return 0;
}