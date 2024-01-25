#include<iostream>
using namespace std;

int binary_search(int arr1[],int arr[]){
    for(int i=0;i<5;i++){
        int key=arr1[i];
        int start=0;
        int end=5;
        int mid;

        while(start<=end){
            
            mid=(start+end)/2;
            if(key==arr[mid]){
                return key;
            }
            else if(arr[mid]>key){
                end=mid-1;
            }
            else if(arr[mid]<key){
                start=mid+1;
            }
        }
       
    }
    return -1;
}

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    
    int arr1[5]={12,23,34,45,55};
    int arr2[6]={4,7,8,9,13,16};

    cout<<binary_search(arr1,arr2);

    
    



    return 0;
}