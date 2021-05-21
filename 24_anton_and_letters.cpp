#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int l, k=0;
    l = s.length();// - count(s.begin(), s.end(), ' ');
    sort(s.begin(), s.end());

    for(int i=0; i<l; i++){
        if(s[i]>=97 && s[i]<=122){
            k++;
            if(s[i]==s[i+1]){
                k--;
            }
        }
    }
    cout<<k;


    return 0;
}