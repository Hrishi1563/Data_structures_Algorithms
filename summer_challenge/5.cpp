#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> max_time(n);
        vector<int> min_time(n);
        vector<int> capacity(n);
        vector<int> speed(n);
        for (int i = 0; i < n; i++)
            cin >> capacity[i];
        for (int i = 0; i < n; i++)
            cin >> speed[i];
    }
}