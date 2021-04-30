#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int cal=0;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]=='1'){
            cal += a;
        }
        if(s[i]=='2'){
            cal += b;
        }
        if(s[i]=='3'){
            cal += c;
        }
        if(s[i]=='4'){
            cal += d;
        }
    }
    cout<<cal;

    return 0;
}