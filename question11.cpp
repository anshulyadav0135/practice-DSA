#include<iostream>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

   int n;
   cin>>n;

    
    string arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=0;

    for(int i=0;i<arr[0].length();i++){
        int j;
        for(j=0;j<n-1;j++){
            if(arr[j][i]==arr[j+1][i]){
                continue;
            }else{
                break;
            }
        }
        if(j==n-1){
            ans++;
        }else{
            break;
        }
    }

    cout<<ans;



    return 0;
}