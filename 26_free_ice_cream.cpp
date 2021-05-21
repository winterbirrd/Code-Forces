#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, x, rem=0, dis=0, num;
    cin>>n>>x;
    rem=x;
    string s;
    for(int i=0; i<n; i++){
        cin>>s>>num;
        
        if(s=="+"){
            rem+=num;
        }
        else if(s=="-" && rem>=num){
            rem-=num;
        }
        else{
            dis++;
        }

    }
    cout<<rem<<" "<<dis;

    return 0;
}