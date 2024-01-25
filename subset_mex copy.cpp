#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a;
    cin >> a;

    for (int i = 0; i < a; i++) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Sort the array using Bubble Sort
        bubbleSort(arr, n);

        // Print the sorted array
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        
        if(n%2!=0){
            int min=arr[i];
            for(int i=0;i<n-1;i++){
                if(arr[i]>arr[i+1]){
                    min=arr[i+1];
                }
            }
            cout<<min;
        }else{
            
        }





    }

    return 0;
}
