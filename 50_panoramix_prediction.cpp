#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int np=0, flag=0;
    for(int i=n+1; ; i++){
        for(int j=2; j<i; j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
                np=i;
                break;
        }
        else{
            flag=0;
            continue;
        }
    }
    if(np==m){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}