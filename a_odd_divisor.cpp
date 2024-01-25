#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int check(long long n){
    if(n%2!=0){
        return 1;
    }
    while(n>1){
        if(n%2!=0){
            return 1;
        }
        n=n/2;
    }
    return 0;
}

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int q;
    cin>>q;
    for(int i=0;i<q;i++){

        long long n;
        cin>>n;
        
        int ans=check(n);
        if(ans==1){
            cout<<"YES";
        }else if(ans==0){
            cout<<"NO";
        }







    cout<<endl;
    }

    return 0;
}