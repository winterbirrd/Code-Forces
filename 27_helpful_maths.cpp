#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    char ch[100];
    cin>>s;
    int l=0, j=0;
    l=s.length();
    for(int i=0; i<l; i++){
        if(s[i]!='+'){
            ch[j]=s[i];
            j++;
        }
    }
    sort(ch, ch+j);
    for(int i=0; i<j; i++){
        if(i==j-1){
            cout<<ch[i]<<endl;
        }
        else{
            cout<<ch[i]<<"+";
        }
    }

    return 0;
}