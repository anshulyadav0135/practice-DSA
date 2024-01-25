#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int answer(){

    int a,b;
    cin>>a>>b;
    if(a-b==0){
        return 0;
    }
    if(a<b){
        if((b-a)%2==1){
            return 1;
        }else if((b-a)%2==0){
            return 2;
        }
    }else if(a>b){
        if((a-b)%2==1){
            return 2;
        }else if((a-b)%2==0){
            return 1;
        }
    }
    
    return 0;
}

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);


    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<answer()<<endl;
    }

    







    return 0;
}