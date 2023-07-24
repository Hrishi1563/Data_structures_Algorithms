#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int func()
{
}
int main()
{

    int N, M;
    cin >> N >> M;

    vector<vector<char>> maze(N, vector<char>(M));
    int entryX, entryY;
    int exitX, exitY;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> maze[i][j];
            if (maze[i][j] == '@')
            {
                entryX = i;
                entryY = j;
            }
            if (maze[i][j] == '#')
            {
                exitX = i;
                exitY = j;
            }
        }
    }

    vector<vector<int>> path_visit(N, vector<int>(M, -1));
    cout << func();
}