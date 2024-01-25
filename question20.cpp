#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){

        int a;
        cin>>a;

        if(a<9){
            cout<<"0";
        }
        else if(a==9){
            cout<<"1";
        }else{
            cout<<(a-9)/10+1;
        }




    cout<<endl;


    }



    return 0;
}