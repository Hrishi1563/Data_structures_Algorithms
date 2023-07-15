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
        vector<double> capacity(n);
        vector<double> speed(n);
        for (int i = 0; i < n; i++)
            cin >> capacity[i];
        for (int i = 0; i < n; i++)
            cin >> speed[i];
        sort(capacity.begin(), capacity.end());
        sort(speed.begin(), speed.end());
        double mini = INT_MAX;
        double maxi = INT_MAX;
        ;
        for (int i = 0; i < n; i++)
        {
            double temp = capacity[i] / speed[i];
            ;
            mini = min(mini, temp);
            maxi = max(maxi, temp);
        }

        cout << floor((mini + maxi) / 2) << endl;
    }
}