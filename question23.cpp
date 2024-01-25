#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    string s;
    cin>>s;

    int count=1;
    if(s.length()<7){
        cout<<"NO";
    }else{
        for(int i=0;i<s.length();i++){
            if(count==7){
                break;
            }
            if(s[i]==s[i+1]){
                count++;
            }else{
                count=1;
            }
        }
        if(count>=7){
            cout<<"YES";
        }else{
            cout<<"NO";
        }


    }
    
    



    return 0;
}