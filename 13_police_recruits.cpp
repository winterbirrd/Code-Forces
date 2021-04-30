#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin>>num;
    int s=0;
    int *a = new int[num];
    int crimes=0, rem=0;
    for(int i=0; i<num; i++){
        cin>>a[i];
    }
    for(int i=0; i<num; i++){
        if(a[i]>0){
            rem += a[i];
        }else if(a[i]<0 && rem>0){
            rem--;
        }else{
            crimes++;
        }
    }
    cout<<crimes;

    return 0;
}