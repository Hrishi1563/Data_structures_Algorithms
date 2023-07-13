#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &vec, int first, int last, bool flag)
{

    if (first == last)
        return 0;

    if (flag)
    {

        flag = false;

        int take_first = func(vec, first + 1, last, flag) + vec[first];

        int take_last = func(vec, first, last - 1, flag) + vec[last];

        return max(take_first, take_last);
    }
    else
    {
        flag = true;
        int take_first = func(vec, first + 1, last, flag);

        int take_last = func(vec, first, last - 1, flag);

        return min(take_first, take_last);
    }
}

int main()
{
    vector<int> vec = {20, 2, 10, 11};
    // vector<vector<int>>;
    int first = 0;
    int last = vec.size() - 1;
    int ans = func(vec, first, last, true);
    cout << ans;
}