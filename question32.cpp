#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the pivot element (usually the last element)
    int i = low - 1; // Index of the smaller element

    for (int j = low; j <= high - 1; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}
int common(int arr[],int m){
    int max=1;
    for(int i=0;i<m-1;i++){
        if(arr[i]==arr[i+1]){
            max++;
        }
    }
    return max;
}

// Function to perform Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Find pivot element such that
        // elements smaller than pivot are on the left
        // and elements greater than pivot are on the right
        int pi = partition(arr, low, high);

        // Recursively sort the sub-arrays
        quickSort(arr, low, pi - 1); // Before pivot
        quickSort(arr, pi + 1, high); // After pivot
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, m - 1);

    // cout<<common(arr,m);
    
    int min=999999;

    int i=0;
    int j=i+n-1;
    while(j<m){
        if(arr[j]-arr[i]<min){
            min=arr[j]-arr[i];
        }
        i++;
        j++;
    }
    
    
    
    if(n==common(arr,m)){
        cout<<0;
    }else{
        cout<<min;

    }


    return 0;
}
