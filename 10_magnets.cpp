#include<bits/stdc++.h>
using namespace std;

int main() {
    int size, count=1;
    cin>>size;
    int len=size*2;
    char *a = new char[len];
    for(int i=0; i<len; i++){
        cin>>a[i];
        if(i>0 && a[i]==a[i-1]){
            count++;
        }
    }
    cout<<count;


    return 0;
}