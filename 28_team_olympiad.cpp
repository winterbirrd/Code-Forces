#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a=0, b=0, c=0;
    int t1[5000], t2[5000], t3[5000];
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
            if(arr[i]==1){
                t1[a]=i+1;
                a++;
            }
            else if(arr[i]==2){
                t2[b]=i+1;
                b++;
            }
            else if(arr[i]==3){
                t3[c]=i+1;
                c++;
            }
    }
    int s, team;
    s = min(a,b);
    team = min(s,c);
    cout<<"\n"<<team<<endl;
    for(a=0, b=0, c=0; a<team, b<team, c<team; a++, b++, c++){
        cout<<t1[a]<<" "<<t2[b]<<" "<<t3[c]<<endl;
    }

    return 0;
}