#include <iostream>
using namespace std;

int main() {
    int x, y;
    int count=0;
    int A[5][5];
    for(int i=0; i<5;i++){
        for(int j=0; j<5; j++){
            cin>>A[i][j];
            if(A[i][j]==1){
                x=i;
                y=j;
            }
        }
    }
    while(x<2||x>2||y<2||y>2){
                    if(x>2){
                        x--;
                        count++;
                    }
                    if(x<2){
                        x++;
                        count++;
                    }
                    if(y>2){
                        y--;
                        count++;
                    }
                    if(y<2){
                        y++;
                        count++;
                    }
                }
    

    cout<<count;

    return 0;
}