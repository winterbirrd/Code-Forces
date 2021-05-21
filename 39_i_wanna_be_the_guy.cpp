#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q;
    cin>>n;
    cin>>p;
    int *arr = new int[2*n];
    for(int i=0; i<p; i++){
        cin>>arr[i];
    }
    cin>>q;
    for(int i=p; i<p+q; i++){
        cin>>arr[i];
    }
    int count=0;
    for(int j=1; j<=n; j++){
        for(int i=0; i<p+q; i++){
            if(arr[i]==j){
                count++;
                break;
            }
        }
    }
    if(count==n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }


    return 0;
}