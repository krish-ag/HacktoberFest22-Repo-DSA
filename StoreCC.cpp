#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];
vector<int> temp;
vector<vector<int>> cc;
void dfs(int vertex)
{
    vis[vertex] = true;
    temp.push_back(vertex);
    for (int child : g[vertex])
    {
        if (vis[child])
            continue;
        dfs(child);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    int count(0);
    for (int i = 1; i <= n; i++)
    {
        temp.clear();
        if (vis[i])
            continue;
        dfs(i);
        cc.push_back(temp);
        count++;
    }
    cout << count << endl;
    for (auto ele1 : cc)
    {
        for (int ele2 : ele1)
            cout << ele2 << " ";
        cout << endl;
    }
    return 0;
}
