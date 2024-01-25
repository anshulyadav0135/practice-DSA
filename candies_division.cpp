#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {

        int n, k;
        cin >> n >> k;
        int a;
        a = n / k;
        int b;
        b = n % k;
        if (b <= k / 2)
        {
            cout << n;
        }
        else
        {
            cout << (a * k) + k / 2;
        }
        cout << endl;
    }

    return 0;
}