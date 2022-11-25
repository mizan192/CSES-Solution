// Bismillahir Rahmanir Raheem,
#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define br cout << "\n"
#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define lop(i, n) for (i = 0; i < n; i++)

#define MAX 100005

int n, m, sv, ev;
std::vector<int> gr[MAX];
bool vis[MAX];
int parent[MAX];
bool hasCycle = false;

void dfs(int node, int pr)
{
    vis[node] = 1;
    parent[node] = pr;
    for (auto child : gr[node])
    {
        if (!vis[child])
            dfs(child, node);
        else if (vis[child] && child != pr)
        {
            hasCycle = true;
            ev = child;
            sv = node;
            return;
        }
    }
}

int main()
{
    int i, j;
    cin >> n >> m;
    lop(i, m)
    {
        int a, b;
        cin >> a >> b;
        gr[a].pb(b);
        gr[b].pb(a);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i, -1);
            if (hasCycle)
                break;
        }
    }

    // for (int i = 1; i <= n; i++) cout << parent[i] << sp;
    // br;
    // for (int i = 1; i <= n; i++) {
    //     cout << i << " -> ";
    //     for (auto x : gr[i]) cout << x << sp;
    //     br;
    // }

    if (!hasCycle)
        cout << "IMPOSSIBLE\n";
    else
    {

        // cout << sv << sp << ev << nl;

        std::vector<int> path;
        int tmp = ev;
        path.pb(sv);

        while (tmp != sv)
        {
            path.pb(tmp);
            tmp = parent[tmp];
        }
        path.pb(sv);

        cout << path.size() << nl;
        for (auto x : path)
            cout << x << sp;
    }

    return 0;
}
