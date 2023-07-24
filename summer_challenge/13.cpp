#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func(vector<int> &A, vector<int> &B, string &str, int temp_ans, int ans, int index)
{

    if (index >= A.size())
    {
        ans = min(ans, temp_ans);
        return;
    }
    for (int i = 0; i < A.size(); i++)
    {
        if (str[i] == '1')
        {
            str[i] = '0';
            func(A, B, str, temp_ans + (A[index] * B[i]), ans, index + 1);
            str[i] = '1';
        }
    }
    return;
}

int main()
{

    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    string str = "";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        str.push_back('1');
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    int ans = INT_MAX;
    func(A, B, str, 0, ans, 0);
    cout << ans << endl;
}