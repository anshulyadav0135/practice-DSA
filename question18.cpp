#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        int ans=0;
        int min=2147483647;

        int arr[m];
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }

        for(int i=0;i<m;i++){
            if(arr[i]<min){
                min=arr[i];
            }
        }

        for(int i=0;i<m;i++){
            ans=ans+(arr[i]-min);
        }

        cout<<ans<<endl;
    }




    return 0;
}