#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int u=0, l=0;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]>64 && s[i]<91){
            u++;
        }else{
            l++;
        }
    }
    if(u>l){
        for(int i=0; s[i]!='\0'; i++){
            if(s[i]>90){
                s[i] = s[i] - 32;
            }
            cout<<s[i];
        }
    }else{
        for(int i=0; s[i]!='\0'; i++){
            if(s[i]<91){
                s[i] = s[i] + 32;
            }
            cout<<s[i];
        }
    }
    return 0;
}