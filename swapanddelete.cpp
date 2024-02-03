#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int cases;
    cin>>cases;
    for(int k=0;k<cases;k++){

        string str;
        cin>>str;
        string good;
        string t=str;
        int zero,one;
        for(int i=0;i<str.length();i++){
            if(str[i]=='0'){
                zero++;
                good.push_back('1');
            }
            if(str[i]=='1'){
                one++;
                good.push_back('0');
            }
        }
        int i=0;
        int j=0;
        while(i<t.length()){
            while(t[j]!=good[i] && j<t.length()){
                j++;
            }
            if(t[j]==good[i]){
                swap(t[i],t[j]);
            }else{
                
            }
            i++;
        }
        











    }



    return 0;
}