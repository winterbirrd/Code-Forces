#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    int countx=1, county=0, count=0;
    for(int i=1; i<n; i++){
        if(a[i][i]==a[i-1][i-1]){
            countx++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==(n-1)-j && a[i][j]==a[0][n-1]){
                county++;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]==a[0][1]){
                count++;
            }
        }
    } 
    int x = (n*n - (n + n -1));
    
    if(countx==n && county==n && count==x){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}