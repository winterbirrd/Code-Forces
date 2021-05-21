#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c;
    cin>>a>>b;
    if(a.size()!=b.size()){
        cout<<max(a.size(), b.size());
    }
    else if(a==b){
        cout<<-1;
    }
    else{
        cout<<a.size();
    }


    return 0;
}