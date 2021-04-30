#include<bits/stdc++.h>
using namespace std;

int main() {
    string obj;
    cin>>obj;
    int count=0, flag=97, diff;
    for(int i=0; obj[i]!='\0'; i++){
        diff = abs(flag-obj[i]);
        if(diff>13){
            diff = 26-diff;
        }
        count += diff;
        flag = obj[i];
    }
    cout<<count;

    return 0;
}