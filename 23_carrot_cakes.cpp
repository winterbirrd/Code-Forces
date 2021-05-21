#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int with=0, without=0;
    int finWithout, finWith;
    bool flag1=0, flag2=0;
    for(int tt=1; ; tt++){
        if(tt%t==0){
            without+=k;
            with+=k;
        }
        if(tt>d && (tt-d)%t==0){
            with+=k;
        }
        if(with>=n && flag1==0){
            finWith=tt;
            flag1=1;
        }
        if(without>=n && flag2==0){
            finWithout=tt;
            flag2=1;
        }
        if(without>=n && with>=n){
            break;
        }
    }
    if(finWith>=finWithout){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }

    return 0;
}