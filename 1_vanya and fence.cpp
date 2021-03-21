#include <iostream>

using namespace std;

int main()
{
    int n, h, a[1000], w[1000], sum=0;
    cin>>n;
    cin>>h;
    int fh;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]>h){
            w[i]=2;
        }else{
            w[i]=1;
        }
    }
    for(int i=0; i<n; i++){
        sum = sum+w[i];
    }
    cout<<sum;

    return 0;
}
