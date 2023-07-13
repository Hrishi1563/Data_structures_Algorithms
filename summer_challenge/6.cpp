#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        long double ans = sqrt(1 + 8 * num);
        ans = (ans - 1) / 2;
        cout << int(num) << endl;
    }
}