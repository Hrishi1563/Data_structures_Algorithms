#include <iostream>
#include <vector>
using namespace std;

long long get_answer(const vector<long long> &heights, long long l)
{
    long long ans = 0;
    bool flag = false;
    for (int i = 0; i < heights.size(); i++)
    {
        if (heights[i] > l)
        {
            flag = true;
        }
        else
        {
            if (flag)
            {
                ans++;
                flag = false;
            }
        }
    }
    if (flag)
        ans++;
    return ans;
}

int main()
{
    long long n, p, l;
    cin >> n >> p >> l;

    vector<long long> heights(n);
    long long prev = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
        if (heights[i] > l)
            flag = true;
        else
        {
            if (flag)
            {
                prev++;
                flag = false;
            }
        }
    }
    if (flag)
        prev++;

    vector<vector<long long>> queries(p);
    for (int i = 0; i < p; i++)
    {
        int query_type;
        cin >> query_type;

        if (query_type)
        {
            long long kth, dthlength;
            cin >> kth >> dthlength;
            queries[i] = {query_type, kth, dthlength};
        }
        else
        {
            queries[i] = {query_type};
        }
    }
    flag = true;
    for (int i = 0; i < p; i++)
    {
        if (queries[i][0])
        {
            if (heights[queries[i][1] - 1] > l)
                flag = false;
            heights[queries[i][1] - 1] += queries[i][2];
            if (heights[queries[i][1] - 1] <= l)
                flag = false;
        }
        else
        {
            if (flag)
            {
                prev = get_answer(heights, l);
                cout << prev << endl;
            }
            else
            {
                cout << prev << endl;
                flag = true;
            }
        }
    }

    return 0;
}
