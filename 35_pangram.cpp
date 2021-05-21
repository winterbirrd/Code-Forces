#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    char x = 'a';
    cin>>n;
    cin>>s;
    for(int i=0; i<n; i++){
        s[i]=tolower(s[i]);
    }
    if(n>=26){
        for(int i=0; i<26; i++){
            if(s.find(x)!=-1){
                x++;
            }
            else{
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}