#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int j = 0; j < n; j++)
    {

        string str;
        cin >> str;
        if (str.length() == 1)
        {
            cout << str;
        }
        else if (str.length() == 2)
        {
            if (str[0] == str[1])
            {
                cout << str;
            }
            else
            {
                cout << "aa";
            }
        }
        else if (str.length() == 3)
        {
            if (str[0] == str[2])
            {
                cout << str;
            }
            else
            {
                str[0] = str[2];
                cout << str;
            }
        }
        else
        {
            if (str[0] == str[str.length() - 1] && str[1] == str[str.length() - 2])
            {
                cout << str;
            }
            else
            {
                if (str[0] != str[str.length() - 1])
                {
                    str[0] = str[str.length() - 1];
                }
                if (str[1] != str[str.length() - 2])
                {
                    str[1] = str[str.length() - 2];
                }
                cout << str;
            }
        }

        cout << endl;
    }

    return 0;
}