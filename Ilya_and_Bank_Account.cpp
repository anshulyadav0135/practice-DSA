#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int checkmax(int arr[], int len)
{
    int max = 0;
    if (len == 1)
    {
        return 0;
    }
    if (arr[len - 1] > arr[len - 2])
    {
        max = len - 1;
    }
    else
    {
        max = len - 2;
    }
    return max;
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    if (n >= 0)
    {
        cout << n;
    }
    else
    {
        int temp = n * (-1);

        string str = to_string(temp);
        int arr[str.length()];
        for (int i = 0; i < str.length(); i++)
        {
            arr[i] = str[i] - '0';
        }

        int index = checkmax(arr, str.length());

        int x = 0;
        int ten = 1;
        for (int i = 0; i < str.length(); i++)
        {
            if (i == index)
            {
                continue;
            }
            else
            {
                x = x * 10 + arr[i];
            }
        }
        x = x * (-1);
        cout << x;
    }

    return 0;
}