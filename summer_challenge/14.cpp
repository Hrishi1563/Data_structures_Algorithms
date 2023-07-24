#include <iostream>
#include <vector>
using namespace std;

void sieveOfEratosthenes(vector<long long> &sieve)
{
    sieve[0] = sieve[1] = 0;
    for (long long i = 2; i < sieve.size(); i++)
    {
        if (sieve[i] == 1)
        {
            for (long long j = i * 2; j < sieve.size(); j += i)
            {
                sieve[j] = 0;
            }
        }
    }
}

void countBeautifulPartitions(vector<long long> &nums, vector<long long> &sieve, long long index, long long sum, long long &total)
{

    if (index >= nums.size())
    {
        if (sieve[sum] && sum % 2 != 0)
            total++;

        return;
    }
    sum += nums[index];
    if (sum % 2 != 0 && sieve[sum] == 1)
        countBeautifulPartitions(nums, sieve, index + 1, sum, total);

    for (int i = index + 1; i < nums.size(); i++)
    {
        sum += nums[i];
        countBeautifulPartitions(nums, sieve, i + 1, sum, total);
    }
}

int main()
{
    long long n;
    cin >> n;

    vector<long long> nums(n);
    long long maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        maxi = max(maxi, nums[i]);
    }
    nums.push_back(0);
    vector<long long> sieve(maxi + maxi + 1, 1);
    sieveOfEratosthenes(sieve);

    long long total = 0;
    countBeautifulPartitions(nums, sieve, 0, 0, total);
    cout << total << endl;

    return 0;
}
