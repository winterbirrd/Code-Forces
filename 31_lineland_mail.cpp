#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        long long mini=0, maxi=0;
        if(!i){
            mini=abs(a[0]-a[1]);
            maxi=abs(a[0]-a[n-1]);
        }
        else if(i==n-1){
            mini=a[i]-a[i-1];
            maxi=a[i]-a[0];
        }
        else{
            mini = min(abs(a[i]-a[i-1]), abs(a[i]-a[i+1]));
            maxi = max(abs(a[i]-a[n-1]), abs(a[i]-a[0]));
        }
        
        cout<<abs(mini)<<" "<<abs(maxi)<<endl;
    }

    return 0;
}