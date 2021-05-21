#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a;
    cin>>n>>m>>m;
    int r = n*m;
    int s = a*a;
    int count=1;
    int t=s;
    while(s<=r){
        t += s;
        count++;
    }
    cout<<count;

    return 0;
}