#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<long long> initializeDiffArray(vector<long long> &A)
{
    int n = A.size();
    vector<long long> D(n + 1);
    D[0] = A[0], D[n] = 0;
    for (int i = 1; i < n; i++)
        D[i] = A[i] - A[i - 1];
    return D;
}

void update(vector<long long> &D, long long l, long long r, long long x)
{
    D[l] += x;
    D[r + 1] -= x;
}
void update_diff_arr(vector<long long> &D, long long l, long long r, long long x)
{
    D[l] -= x;
    D[r + 1] += x;
}
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
    vector<long long> D = initializeDiffArray(nums);

    long long l, r, x;
    for (int i = 0; i < l1; i++)
    {
        cin >> l >> r >> x;
        update(D, l, r, x);
    }
    for (int i = 0; i < l2; i++)
    {
        cin >> l >> r >> x;
        update_diff_arr(D, l, r, x);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0)
            nums[i] = D[i];
        else
            nums[i] = D[i] + nums[i - 1];
    }

    for (int i = 0; i < l3; i++)
    {
        long long l, r, x;
        cin >> l >> r >> x;

        for (int j = l - 1; j <= r - 1; j++)
        {
            nums[j] ^= x;
        }
    }
    for (int i = 0; i < l4; i++)
    {
        long long l, r, x;
        cin >> l >> r >> x;

        for (int j = l - 1; j <= r - 1; j++)
        {
            nums[j] = (nums[j] % mod) * (x % mod);
            nums[j] %= mod;
        }
    }

    for (auto it : nums)
        cout << it;
}
