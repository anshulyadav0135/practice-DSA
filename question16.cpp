#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int n;
    cin>>n;

    if(n%2==1){
        cout<<"Ehab";
    }else if(n%2==0){
        cout<<"Mahmoud";
    }


    return 0;
}