#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> nums;
    while (t--)
    {
        int n;
        cin >> n;
        nums.push_back(n);
    }
    sort(nums.begin(), nums.end());
    cout << abs(nums[0]) + abs(nums[1]) << endl;
}