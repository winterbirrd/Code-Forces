#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int *arr= new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int a,b;
    for(int j=0; j<m; j++){
        cin>>a>>b;
        a-=1;
        
        if((a-1)>=0 && (a)!=(n-1)){
            arr[a-1]+=(b-1);
            arr[a+1]+=(arr[a]-1)-(b-1);
            arr[a]=0;
        }
        else if(a==0){
            arr[a+1]+=(arr[a]-1)-(b-1);
            arr[a]=0;
        }
        else if((a+1)>=(n-1)){
            arr[a]=0;
            arr[a-1]+=(b-1);
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}