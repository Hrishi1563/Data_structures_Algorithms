#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{

    Node *links[26];
    bool flag = false;

    bool containsKey(char ch)
    {
        return links[ch - 'a'] != NULL;
    }
    void put(char ch, Node *node)
    {
        links[ch - 'a'] = node;
    }
    Node *get(char ch)
    {
        return links[ch - 'a'];
    }
    void setEnd()
    {
        flag = true;
    }

    bool isEnd() { return flag; }
};

class Trie
{
private:
    Node *root;

public:
    Trie()
    {

        root = new Node();
    }
    void insert(string word)
    {
        Node *node = root;
        for (int i = 0; i < (int)word.length(); i++)
        {
            if (!node->containsKey(word[i]))
            {
                node->put(word[i], new Node());
            }

            node = node->get(word[i]);
            node->setEnd();
        }
    }

    bool search(string word)
    {
        Node *node = root;
        for (int i = 0; i < (int)word.length(); i++)
        {
            if (!node->containsKey(word[i]))
            {
                return false;
            }
            node = node->get(word[i]);
        }

        return node->isEnd();
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Trie trie;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            bool flag1 = false;
            bool has_printed = false;
            for (int j = 1; j <= (int)s.length(); j++)
            {
                if (!trie.search(s.substr(0, j)))
                {

                    if (flag1)
                        cout << s.size() - (j - 1) + 1 << endl;
                    else
                        cout << s.size() << endl;

                    has_printed = true;
                    break;
                }
                flag1 = true;
            }
            if (!has_printed)
                cout << 1 << endl;
            trie.insert(s);
        }
    }
    return 0;
}
