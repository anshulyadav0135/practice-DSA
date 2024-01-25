#include<iostream>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int arr[5][5];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    int x,y;
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                x=i;
                y=j;
            }
        }
    }

    int steps=0;
    steps=steps+abs(x-2);
    steps=steps+abs(y-2);
    cout<<steps;
    return 0;
}