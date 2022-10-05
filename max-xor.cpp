#include <bits/stdc++.h>
using namespace std;
struct Node
{
    Node *links[2];
    bool contain(int bit)
    {
        return (links[bit] != NULL);
    }
    void put(int bit, Node *node)
    {
        links[bit] = node;
    }
    Node *get(int bit)
    {
        return links[bit];
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
    void Insert(int num)
    {
        Node *node = root;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (num >> i) & 1;
            if (!node->contain(bit))
            {
                node->put(bit, new Node());
            }
            node = node->get(bit);
        }
    }
    int maxx(int num)
    {
        Node *node = root;
        int total = 0;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (num >> i) & 1;
            if (node->contain(!(bit)))
            {
                node = node->get(!(bit));
                total += pow(2, i);
            }
            else
            {
                node = node->get(bit);
            }
        }
        return total;
    }
};
int main()
{
    Trie trie;
    int n, m;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        trie.Insert(v1[i]);
    }
    cin >> m;
    cout << trie.maxx(m);
}
