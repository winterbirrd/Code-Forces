#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string *s = new string[n];
    for(int i=0; i<n; i++){
        cin>>s[i];    
    }
    for(int i=0; i<n; i++){
        int l=0, w=0;
        l=s[i].length();
        if(l>10){
            w=l-2;
            cout<<s[i].at(0)<<w<<s[i].at(l-1)<<endl;
        }
        else{
            cout<<s[i]<<endl;
        }
    }

    return 0;
}