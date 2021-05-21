#include<bits/stdc++.h>
using namespace std;

int main() {
    int y, w;
    cin>>y>>w;
    int c=max(y,w);
    string arr[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6" };
    cout<<arr[c];


    return 0;
}