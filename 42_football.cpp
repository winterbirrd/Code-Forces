#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string t[n];
    int i=0;
    while(i<n){
        cin>>t[i];
        i++;
    }
    string x;
    int a=1, b=0;
    for(int i=1; i<n; i++){
        if(t[i]==t[0]){
            a++;
        }
        else{
            b++;
            x=t[i];
        }
    }
    int won = max(a,b);
    if(won==a){
        cout<<t[0];
    }
    else{
        cout<<x;
    }

    return 0;
}