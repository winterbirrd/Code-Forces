#include<bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin>>n;
    int len=1;
    sort(n.begin(), n.end());
    for(int i=1; n[i]!='\0'; i++){
         if(n[i]!=n[i-1]){
             len++;
         }
    }
    if(len%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }

    return 0;
}