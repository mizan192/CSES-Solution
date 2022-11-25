// Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define br cout << "\n"
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define lop(i, n) for (i = 0; i < n; i++)
#define vsort(q) sort(q.begin(), q.end())
#define vsortr(q) sort(q.rbegin(), q.rend())
#define MAX 100005

int n, m;
std::vector<int> gr[MAX];
bool vis[MAX];
std::vector<int> dist, path;
int parent[MAX];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    dist[src] = 0;
    parent[src] = src;

    while (!q.empty())
    {

        int u = q.front();
        q.pop();
        for (auto v : gr[u])
        {
            if (dist[v] == INT_MAX)
            {
                dist[v] = dist[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }
}

void solve()
{
    int i, j;
    cin >> n >> m;
    dist.resize(n + 1, INT_MAX);

    lop(i, m)
    {
        int a, b;
        cin >> a >> b;
        gr[a].pb(b);
        gr[b].pb(a);
    }

    int cnt = 0;

    bfs(1);

    // for (int i = 1; i <= n; i++) {
    //     cout << dist[i] << sp;
    // }
    // br;

    // for (i = 1; i <= n; i++) {
    //     cout << i << " -> ";
    //     for (auto x : dis[i]) cout << x << sp;
    //     br;
    // }

    if (dist[n] == INT_MAX)
        cout << "IMPOSSIBLE\n";
    else
    {
        int src = 1, target = n, now = n;
        path.pb(target);
        while (now != src)
        {
            now = parent[now];
            path.pb(now);
        }
        cout << path.size() << nl;
        for (i = path.size() - 1; i >= 0; i--)
            cout << path[i] << sp;
        br;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}