#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int mod = 1e9 + 7;

    long long n;
    cin >> n;
    vector<long long> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    long long l1, l2, l3, l4;
    cin >> l1 >> l2 >> l3 >> l4;
    for (int i = 0; i < l1; i++)
    {
        long long l, r, x;
        cin >> l >> r >> x;
        ;
        for (int j = l - 1; j <= r - 1; j++)
        {
            nums[j] += x;
        }
    }
    for (int i = 0; i < l2; i++)
    {
        long long l, r, x;
        cin >> l >> r >> x;
        ;
        for (int j = l - 1; j <= r - 1; j++)
        {
            nums[j] -= x;
        }
    }
    for (int i = 0; i < l3; i++)
    {
        long long l, r, x;
        cin >> l >> r >> x;
        ;
        for (int j = l - 1; j <= r - 1; j++)
        {
            nums[j] ^= x;
        }
    }
    for (int i = 0; i < l4; i++)
    {
        long long l, r, x;
        cin >> l >> r >> x;
        ;
        for (int j = l - 1; j <= r - 1; j++)
        {
            nums[j] = (nums[j] % mod) * (x % mod);
            nums[j] %= mod;
        }
    }
    for (auto it : nums)
        cout << it;
}