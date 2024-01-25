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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }


        int ans=0;

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n-1;j++){
        //         if(arr[j]==1){
        //             continue;
        //         }else{
        //             if(arr[j]>=arr[j+1]){
        //                 arr[j]=(arr[j])/2;
        //                 ans++;
        //             }
        //         }
        //     }
        // }

        for(int j=0;j<n;j++){
                for(int i=0;i<n-1;i++){

                while(arr[i]>=arr[i+1] && arr[i]!=0 && arr[i+1]!=0){
                    
                        
                    arr[i]=(arr[i])/2;
                    ans++;
                        
                    
                }



            }
        }
        



        // cout<<ans<<endl;
        for(int i=0;i<n-1;i++){
            if(arr[i]>=arr[i+1]){
                ans=-1;
                break;
            }
        }
        cout<<ans<<endl;
        






    }


    return 0;
}