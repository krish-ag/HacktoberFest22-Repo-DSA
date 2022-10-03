#include <bits/stdc++.h>
using namespace std;
struct Node
{
    Node *links[26];
    int ew = 0;
    int pre = 0;
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
            node->pre++;
            node = node->get(word[i]);
        }
        node->pre++;
        node->ew++;
    }
    int count_starting(string pref)
    {
        Node *node = root;
        for (int i = 0; i < pref.length(); i++)
        {
            if (!node > pref[i])
                return 0;
            node = node->get(pref[i]);
        }
        return node->pre;
    }
    int count_word(string word)
    {
        Node *node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (!node > word[i])
                return 0;
            node = node->get(word[i]);
        }
        return node->ew;
    }
};
int main()
{
    Trie a;
    a.Insert("apple");
    a.Insert("apps");
    a.Insert("bat");
    a.Insert("apple");
    a.Insert("apps");
    a.Insert("bat");
    cout << a.count_word("apps") << endl;
    cout << a.count_starting("apps");
}
