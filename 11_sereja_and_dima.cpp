#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    int s=0, d=0, temp, turn=0;
    cin>>num;
    int *a = new int[num];
    for(int i=0; i<num; i++){
        cin>>a[i];
    }
    int i=0, j=num-1;
    while(i<=j){
        if(a[i]>a[j]){
            temp = a[i];
            i++;
        }else{
            temp = a[j];
            j--;
        }
        if(turn==0){
            s += temp;
            turn = 1;
        }else{
            d += temp;
            turn = 0;
        }
    }
    cout<<s<<" "<<d;

    return 0;
}