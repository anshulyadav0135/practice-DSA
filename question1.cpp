#include<iostream>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

int k,n;
cin>>n>>k;

int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
int temp=0;

for(int i=0;i<n;i++){
    if(arr[i]>=arr[k-1] && arr[i]!=0){
        temp++;
        continue;
    }
}
cout<<temp;



    return 0;
}