#include<bits/stdc++.h>
using namespace std;  

int main() {
    int n, k;
    string ran="abcdefghijklmnopqrstuvwxyz";
    string pwd="";
    cin>>n>>k;
    for(int i=0; i<n; i++){
        pwd += ran[i%k];
    }
    cout<<pwd;


    return 0;
}