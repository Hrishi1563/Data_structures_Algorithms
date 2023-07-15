#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(vector<long long> &numbers)
{
    return accumulate(numbers.begin(), numbers.end(), 1,
                      [](long long x, long long y)
                      { return (x * y) / gcd(x, y); });
}

int max_power(long long product, long long num)
{
    if (product % num != 0)
        return 0;

    return max_power(product / num, num) + 1;
}
int main()
{

    long long a, b, q;
    cin >> a >> b >> q;
    vector<long long> numbers;
    for (int i = a; i <= b; i++)
        numbers.push_back(i);

    long long product = lcm(numbers);

    while (q--)
    {
        long long num;
        cin >> num;
        cout << max_power(product, num) << " ";
    }
}