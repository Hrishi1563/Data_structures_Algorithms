#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int citites, roads;
    cin >> citites >> roads;
    vector<vector<int>> adj(roads);
    for (int i = 0; i < roads; i++)
    {
        int t1, t2, t3;
        cin >> t1 >> t2 >> t3;

        adj[t1] = {t2, t3};
        adj[t2] = {t1, t3};
    }
    int start, end, k;
    cin >> start >> end >> k;
    vector<int> travel(k);
    for (int i = 0; i < k; i++)
        cin >> travel[i];
}