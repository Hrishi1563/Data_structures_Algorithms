#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<vector<long long>, long long> &vec1, const pair<vector<long long>, long long> &vec2, const vector<long long> &s)
{
    const vector<long long> &v1 = vec1.first;
    const vector<long long> &v2 = vec2.first;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 1)
        {
            if (v1[i] != v2[i])
                return v1[i] > v2[i];
        }
        else if (s[i] == 0)
        {
            if (v1[i] != v2[i])
                return v1[i] < v2[i];
        }
    }

    return false;
}

int main()
{
    long long n, n1;
    string k;
    cin >> n >> n1 >> k;
    bool flag = false;
    vector<long long> s;
    vector<pair<vector<long long>, long long>> vec;
    for (int i = 0; i < n; i++)
    {
        vector<long long> v(n1);
        for (int j = 0; j < n1; j++)
        {
            if (!flag)
                s.push_back(k[j] - '0'); // Store the preference values as integers
            cin >> v[j];
        }
        flag = true;
        vec.push_back({v, i + 1});
    }
    sort(vec.begin(), vec.end(), [&](const pair<vector<long long>, long long> &a, const pair<vector<long long>, long long> &b)
         { return cmp(a, b, s); });
    for (auto it : vec)
    {
        cout << it.second << " ";
    }
    return 0;
}
