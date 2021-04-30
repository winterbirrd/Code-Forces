#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin>>num;
    string s;
    int count=0;
    cin>>s;
    for(int i=1; s[i]!='\0'; i++){
        if(s[i]==s[i-1]){
            count++;
        }
    }
    cout<<count;


    return 0;
}