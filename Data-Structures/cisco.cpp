#include <iostream>
#include <vector>
#include <algorithm>

int GetMaxPoints(const std::vector<int> &markers)
{
    int n = markers.size();

    if (n == 0)
    {
        return 0;
    }

    std::vector<int> dp(n);

    dp[0] = markers[0];
    dp[1] = std::max(markers[0], markers[1]);

    for (int i = 2; i < n; i++)
    {
        dp[i] = std::max(dp[i - 1], markers[i] + dp[i - 2]);
    }

    return dp[n - 1];
}

int main()
{
    std::vector<int> markers = {20, 2, 10, 11};
    int maxPoints = GetMaxPoints(markers);

    std::cout << "Maximum points: " << maxPoints << std::endl;

    return 0;
}
