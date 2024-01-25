#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==0){
            cout<<"0";
        }else if(a%2==0){
            for(int j=1;j<=a;j=j+2){
                cout<<j+1<<" ";
                cout<<j<<" ";
            }
        }else{
            int j;
            for(j=1;j<=a-1;j=j+2){
                cout<<j+1<<" ";
                if(j+2<=a-1){
                    cout<<j<<" ";
                }
            }
            cout<<j<<" ";
            cout<<j-2<<" ";

        }
        cout<<endl;
    }



    return 0;
}