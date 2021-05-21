#include<bits/stdc++.h>
using namespace std;

// string solve(string s, char c){
//     string keyb = "qwertyuiopasdfghjkl;zxcvbnm,./";
//     string s2;


// }

int main() {

    string keyb = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char where;
    cin>>where;
    string s, s2;
    cin>>s;
    int index=0;
    int len = s.length();
    
    for(int i=0; i<len; i++){
            index = keyb.find(s[i]);

            if(where=='R'){
                s2 += keyb[index-1];
            }
            else{
                s2 += keyb[index+ 1];
            }
    }
        
    cout<<s2;

    return 0;
}
