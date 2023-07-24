#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int mod = 1e9 + 7;

long long func(string &str, long long num)
{
    long long count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] - 48 == num)
            count++;
    }
    return count;
}
long long factorial(long long occur)
{
    if (occur == 0 || occur == 1)
        return 1;

    return (factorial(occur - 1) % mod) * (occur % mod);
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string str;
        long long num;
        cin >> str;
        cin >> num;
        long long total_occurenes = func(str, num);
        cout << factorial(total_occurenes) % mod << endl;
    }
}