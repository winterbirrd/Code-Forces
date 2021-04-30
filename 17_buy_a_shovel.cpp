#include<bits/stdc++.h>
using namespace std;

int main() {
    int c, r;
    cin>>c>>r;
    int cost=0;
    for(int i=1; i<10; i++){
        if(c%10==r){
        cost++;
        break;
        }
        else if((c*i)%10==r){
            cost = i;
            break;
        }
        else{
            if((c*i)%10==0){
                cost = i;
                break;
            }
        }
    }
    cout<<cost;

    return 0;
}