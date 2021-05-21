#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin>>a;
    int i=0, j=0, flag=0;;
    int n=a.size();
    while(i<n){
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B' && flag==0){
            if(i>0){
                cout<<" ";
            }
            i = i+3;
            flag = 1;
        }
        else if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B' && flag==1){
            i = i+3;
            flag = 1;            
        }
        else{
            cout<<a[i];
            i++;
            flag = 0;
            
        }
    }


    return 0;
}