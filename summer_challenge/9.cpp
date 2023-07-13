#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    stack<int> s;
    while (q--)
    {
        int type, id;
        cin >> type;
        if (type == 1)
        {
            cin >> id;
            s.push(id);
        }
        else if (type == 2)
        {
            if (s.size())
            {
                cout << s.top() << endl;
                s.pop();
            }
            else
                cout << -1 << endl;
        }
    }
}