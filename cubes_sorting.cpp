#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bubbleSort(int arr[], int n, int x)
{
    bool swapped;

    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                x++;
                swapped = true;
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted
        if (!swapped)
        {
            break;
        }
    }
    return x;
}

int main()
{ 

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int x = 0;
        x = bubbleSort(arr, n, x);

        if (x >= (n * (n - 1)) / 2)
        {
            cout << "NO";
        }
        else if (x < (n * (n - 1)) / 2)
        {
            cout << "YES";
        }
        cout << endl;
    }

    return 0;
}