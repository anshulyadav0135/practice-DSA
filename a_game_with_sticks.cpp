#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int n,m;
    cin>>n>>m;
    
    if(n<m){
        if(n%2==0){
            cout<<"Malvika";
        }else{
            cout<<"Akshat";
        }
    }
    else if(m<n){
        if(m%2==0){
            cout<<"Malvika";
        }else{
            cout<<"Akshat";
        }
    }
    else {
        if(m%2==0){
            cout<<"Malvika";
        }else{
            cout<<"Akshat";
        }
    }


    return 0;
}