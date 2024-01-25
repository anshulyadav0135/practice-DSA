#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int alwaysPositive(int number) {
    return (number < 0) ? -number : number;
}

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    string str;
    cin>>str;

    //a=97  z=122   e=101

    int i=0;
    int ans=0;
    
    int temp=97;

    for(int i=0;i<str.size();i++){

        int a=str[i]-temp;

        int value = a;
        a = alwaysPositive(value);

       

        if(a>=13){
            a=26-a;
        }

        ans=ans+a;

        temp=str[i];
        cout<<endl;
    }

    cout<<ans;



    return 0;
}