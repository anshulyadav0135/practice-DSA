#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int n;
    cin>>n;
    int ans=0;
    float i=1;
    float a;

    while(i<=n/2){
        float temp=n;
        a=(temp-i)/i;
        if(a==(int)a){
            ans++;
        }
        i++;
    }

    cout<<ans;

    return 0;
}