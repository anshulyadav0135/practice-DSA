#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    string s;
    cin>>s;
    int i;
    for(i=0;i<s.length();i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9' ){
            cout<<"YES";
            break;
        }
    }
    if(i>=s.length()){
        cout<<"NO";
    }
    



    return 0;
}