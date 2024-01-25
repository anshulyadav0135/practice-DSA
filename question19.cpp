#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int isequal(int arr[3]){
    if(arr[0]==arr[1]){
        return 2;
    }if(arr[1]==arr[2]){
        return 0;
    }if(arr[0]==arr[2]){
        return 1;
    }
    else {
        return -1;
    }
}

int findmax(int arr[3]){
    int max=0;
    for(int i=0;i<3;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<3;i++){
        if(max==arr[i]){
            return i;
        }
    }
    return -1;

}

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int n;
    cin>>n;


    for(int i=0;i<n;i++){

        int arr[3];
        for(int j=0;j<3;j++){
            cin>>arr[j];
        }
        if(isequal(arr)==0){
            if(arr[0]%2==0){
                cout<<"yes"<<endl;
                
            }else {
                cout<<"no"<<endl;
                
            }
        }else if(isequal(arr)==1){
            if(arr[1]%2==0){
                cout<<"yes"<<endl;
                
            }else {
                cout<<"no"<<endl;
                
            }
        }else if(isequal(arr)==2){
            if(arr[2]%2==0){
                cout<<"yes"<<endl;
                
            }else {
                cout<<"no"<<endl;
                
            }
        }
        else if(isequal(arr)==-1){
            if(findmax(arr)==0){

                if(arr[1]+arr[2]==arr[0]){
                    cout<<"yes"<<endl;
                    
                }else{
                    cout<<"no"<<endl;
                    
                }
            }
            if(findmax(arr)==1){
                if(arr[0]+arr[2]==arr[1]){
                    cout<<"yes"<<endl;
                    
                }else{
                    cout<<"no"<<endl;
                    
                }
            }
            if(findmax(arr)==2){
                if(arr[1]+arr[0]==arr[2]){
                    cout<<"yes"<<endl;
                    
                }else{
                    cout<<"no"<<endl;
                    
                }
            }

        }








    }



    return 0;
}