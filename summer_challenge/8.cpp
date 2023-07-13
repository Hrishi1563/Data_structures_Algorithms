#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int total_time;
        cin >> total_time;
        vector<int> ans(total_time + 1, -1);
        deque<int> dq;
        for (int i = 1; i < total_time + 1; i++)
        {
            dq.push_back(i);
            int num;
            cin >> num;
            int count = 0;
            if (num == 0)
            {
                dq.push_back(i);
                continue;
            }
            else if (num < 0)
            {
                while (dq.size() && count == num)
                {

                    ans[dq.front()] = i;
                    dq.pop_front();
                    count++;
                }
            }
            else
            {
                while (dq.size() && count == num)
                {
                    ans[dq.back()] = i;
                    dq.pop_back();
                    count++;
                }
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            if (i != 0)
                cout << ans[i] << " ";
        }
        cout << endl;
    }
}