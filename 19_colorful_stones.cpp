#include<bits/stdc++.h>
using namespace std;

int main() {
    int pos=1;
    string s,t;
    cin>>s>>t;
    int j=0;
    for(int i=0; t[i]!='\0'; i++){
        if(t[i]==s[j]){
            pos++;
            j++;
        }
    }
     cout<<pos;

    return 0;
}