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
    bool Search(string word)
    {
        Node *node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (!node->contain(word[i]))
                return false;
            node = node->get(word[i]);
        }
        return node->isEnd();
    }
    bool Startwith(string word)
    {
        Node *node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (!node->contain(word[i]))
                return false;
            node = node->get(word[i]);
        }
        return true;
    }
};
int main()
{
    Trie a;
    a.Insert("apple");
    a.Insert("apps");
    a.Insert("bat");
    cout << a.Startwith("appl");
}
