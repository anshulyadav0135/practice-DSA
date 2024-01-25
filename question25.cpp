#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long long int n, k;
    cin >> n >> k;

    long long int a = 1;

    while (k > 1 && a <= n)
    {
        a = a + 2;
        if (a <= n)
        {
            k--;
        }
    }
    if (k != 1)
    {
        a = 2;
        k--;
        while (k > 1 && a <= n)
        {
            a = a + 2;
            k--;
        }
    }
    cout << a;

    return 0;
}