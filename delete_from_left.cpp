#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s1, s2;
    cin >> s1;
    cin >> s2;

    int count = 0;

    if (s1[s1.size() - 1] != s2[s2.size() - 1])
    {
        count = s1.size() + s2.size();
    }
    else
    {

        while (s1.size() != s2.size())
        {
            if (s1.size() > s2.size())
            {
                while (s1.size() > s2.size())
                {
                    s1.erase(0, 1);
                    count++;
                }
                continue;
            }
            if (s1.size() < s2.size())
            {
                while (s1.size() < s2.size())
                {
                    s2.erase(0, 1);
                    count++;
                }
                continue;
            }
        }
        while (s1 != s2)
        {
            s1.erase(0, 1);
            s2.erase(0, 1);
            count = count + 2;
        }
    }
    // cout<<s1<<endl;
    // cout<<s2<<endl;
    cout << count;

    return 0;
}