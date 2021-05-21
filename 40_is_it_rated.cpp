#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    // if(a[i]!=b[i]||a[i]==b[i]&&a[i]>a[i+1])
    for(i=0;i<n;i++)
    {
            if(a[i]!=b[i])
            {
                cout<<"rated";
                return(0);
            }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==b[i]&&a[i]<a[j])
            {
                cout<<"unrated";
                return(0);
            }
        }
    }
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
        {
            if(a[i]==b[i]&&a[i]>=a[j])
            {
                cout<<"maybe";
                return(0);
            }
        }
    }
}







// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, inc=0;
//     cin>>n;
//     int a[5000], b[5000];
//     for(int i=0; i<n; i++){
//         cin>>a[i]>>b[i];
//     }

//     for(int i=0; i<n; i++){
//         if(a[i]!=b[i]){
//             cout<<"rated";
//             return 0;
//         }
//     }
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(a[i]==b[j] && a[i]<a[j]){
//                 cout<<"unrated";
//                 return 0;
//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(a[i]==b[i] && a[i]>=a[j]){
//                 cout<<"maybe";
//                 return 0;
//             }
//         }
//     }

    // for(int i=0; i<n; i++){
    //     if(a[i]!=b[i]){
    //         cout<<"rated";
    //         return 0;
    //     }
    // }
    // for(int i=0; i<n-1; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(a[i]>b[i]){
    //             inc++;
    //         }
    //     }
    // }
    // if(inc==(n-1)){
    //     cout<<"maybe";
    // }
    // else{
    //     cout<<"unrated";
    // }


//     return 0;
// }