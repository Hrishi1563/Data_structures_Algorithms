#include <iostream>
#include <vector>
#include <string>
using namespace std;

class TrieNode
{
public:
    vector<TrieNode *> children;
    bool isEnd;

    TrieNode()
    {
        children = vector<TrieNode *>(26, NULL);
        isEnd = false;
    }
};

void insert(TrieNode *root, const string &word)
{
    TrieNode *curr = root;
    for (char ch : word)
    {
        int index = ch - 'a';
        if (curr->children[index] == NULL)
        {
            curr->children[index] = new TrieNode();
        }
        curr = curr->children[index];
    }
    curr->isEnd = true;
}

int search(TrieNode *root, const string &word)
{
    TrieNode *curr = root;
    int time = 0;
    string prefix = "";

    for (char ch : word)
    {
        int index = ch - 'a';
        if (curr->children[index] == NULL)
        {
            return -1; // Prefix not found
        }

        curr = curr->children[index];
        prefix += ch;
        if (curr->isEnd || prefix == word)
        {
            time += prefix.length();
            prefix = "";
        }
    }

    return time;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int q;
        cin >> q;

        TrieNode *root = new TrieNode();

        while (q--)
        {
            string s;
            cin >> s;

            int time = search(root, s);
            if (time == -1)
            {
                insert(root, s);
                time = s.length();
            }
            cout << time << endl;
        }
    }

    return 0;
}
