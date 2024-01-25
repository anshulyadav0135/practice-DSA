#include<iostream>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int n,k;
    cin>>n>>k;

    int temp=240-k;
    int time=5;
    int questions=0;
    int i=2;
    while (time<=temp && questions<n)
    {
        questions++;
        time=time+5*i;
        i++;
    }
    
    cout<<questions;



    return 0;
}