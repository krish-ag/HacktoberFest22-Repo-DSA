#include <bits/stdc++.h>
using namespace std;
struct Node
{
    Node *links[26];
    bool flag = false;
    bool contain(char ch)
    {
        return (links[ch - 'a'] != NULL);
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
    bool isEnd()
    {
        return flag;
    }
};
class Trie
{
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }
    void Insert(string word)
    {
        Node *node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (!node->contain(word[i]))
            {
                node->put(word[i], new Node());
            }
            node = node->get(word[i]);
        }
        node->setEnd();
    }
    bool preExist(string word)
    {
        Node *node = root;
        node->setEnd();
        for (int i = 0; i < word.length(); i++)
        {
            if (node->contain(word[i]))
            {
                if (!node->isEnd())
                    return false;
            }
            else
                return false;
            node = node->get(word[i]);
        }
        return true;
    }
};
string completeString(int n, vector<string> &a)
{
    Trie trie;
    for (auto &it : a)
    {
        trie.Insert(it);
    }
    string longest = "";
    for (auto &it : a)
    {
        if (trie.preExist(it))
        {
            if (it.length() > longest.length())
                longest = it;
            else if (it.length() == longest.length() && it < longest)
            {
                longest = it;
            }
        }
    }
    if (longest == "")
        return "none";
    return longest;
}
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << completeString(n, v);
}
/*
6
nin
ninja
n
ni
ninj
ninga
*/
