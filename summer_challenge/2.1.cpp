#include <iostream>
#include <vector>
using namespace std;

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
        flag = true;
        if (prev < 0)
            prev = 0;
        if (queries[i][0])
        {
            int index = queries[i][1] - 1;
            if (heights[index] > l)
                flag = false;
            heights[index] += queries[i][2];
            if (heights[index] <= l)
                flag = false;

            if (flag)
            {
                if ((index - 1 >= 0 && heights[index - 1] > l) && (index + 1 <= n && heights[index + 1] > l))
                    prev--;
                else if ((index - 1 >= 0 && heights[index - 1] > l) || (index + 1 <= n && heights[index + 1] > l))
                    prev += 0;
                else
                    prev++;
            }
        }
        else
        {
            cout << prev << endl;
        }
    }

    return 0;
}