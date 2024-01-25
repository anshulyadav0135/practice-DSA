#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int a;
    cin>>a;
    for(int k=0;k<a;k++){

        int n;
        cin>>n;

        int b=n;
        int cb=0;
        while(n!=0){
            
            cb=n/10;
            b=b+cb;
            n=n/10;
        }
        cout<<b;
        cout<<endl;










    }






    return 0;
}