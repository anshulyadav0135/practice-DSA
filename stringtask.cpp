#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    string str;
    cin>>str;
    string ans;
    

    for(int i=0;i<str.length();i++){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='Y'||str[i]=='y'){
            continue;
        }else{
            ans.push_back('.');
            int a=str[i];
            if(a>=97 && a<=122){
                ans.push_back(str[i]);
            }else{
                a=a+32;
                char b=a;
                ans.push_back(b);
            }
        }
        
    }
    cout<<ans;


    return 0;
}