#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int a,int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
        }
    }
}

    

    int a=n-2;
    int i;
    for(i=1;i<n;i++){
        if(sum(arr,0,n-i-1)<sum(arr,n-i,n-1)){
            break;
        }
    }
    cout<<i;
   




    return 0;
}