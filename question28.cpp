#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        long long int a;
        cin >> a;
        long long int sum = 0;

        sum = (a * (a + 1)) / 2;
        sum = sum - 2;

        if (a == 1)
        {
            sum = sum - 2;
        }
        else
        {
            for (long long int j = 2; j <= a; j++)
            {
                long long int temp = j;
                if (j % 2 == 0)
                {
                    while (temp != 1 && temp % 2 == 0)
                    {
                        temp = temp / 2;
                    }
                    if (temp == 1)
                    {
                        sum = sum - 2 * (j);
                    }
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}