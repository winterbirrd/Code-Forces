#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin>>a;
    cin>>b;
    for(int i=0; a[i] != '\0'; i++){
        if(a[i]>64 && a[i]<91){
            a[i] += 32;
        }
        if(b[i]>64 && b[i]<91){
            b[i] += 32;
        }
        if(a[i]>b[i]){
            cout<<1;
            return 0;
        }
        if(a[i]<b[i]){
            cout<<-1;
            return 0;
        }
    }
    cout<<0;

    return 0;
}
