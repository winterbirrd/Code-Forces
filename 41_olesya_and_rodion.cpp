#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,t,p;
    cin>>n>>t;
    if(n==1 && t>=10){
        cout<<-1;
        return 0;
    }
    int a=0;
    int *arr = new int[n];
    if(t<10 && t>1){
        while(a<n){
            arr[a] = t;
            a++;
        }
    }
    else{
        t=t/10;
        while(a<(n-1)){
            arr[a] = t;
            a++;
        }
        arr[n-1]=0;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

    return 0;
}

        // arr[a] = (y[0] - '0')*10 + y[a];
        // arr[a] = y[0]*10 + y[a];