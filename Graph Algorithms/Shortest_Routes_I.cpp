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
#define ll long long int
#define lop(i, n) for (i = 0; i < n; i++)
#define MAX 100005
#define pii pair<ll, ll>

ll n, m;
std::vector<pair<ll, ll>> gr[MAX];
ll dist[MAX];
bool vis[MAX];

void dijkstra(ll src)
{

    priority_queue<pii, vector<pii>, greater<pii>> pq;

    for (ll i = 1; i <= n; i++)
        dist[i] = LLONG_MAX;
    dist[src] = 0;

    pq.push({0, src});

    while (!pq.empty())
    {
        pii pu = pq.top();
        pq.pop();

        ll pr = pu.ss;

        if (vis[pr])
            continue;
        vis[pr] = 1;

        for (auto child : gr[pr])
        {

            ll newCost = dist[pr] + child.ss;

            if (dist[child.ff] > newCost)
            {
                dist[child.ff] = newCost;
                pq.push({newCost, child.ff});
            }
        }
    }
}

void solve()
{
    ll i, j;
    cin >> n >> m;

    lop(i, m)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        gr[a].pb(mp(b, c));
    }

    dijkstra(1);

    for (ll i = 1; i <= n; i++)
        cout << dist[i] << sp;

    // cout << "graph with cost ->  \n";
    // for (ll i = 1; i <= n; i++) {
    //     if (gr[i].size() >= 1) {
    //         cout << i << " -> ";
    //         for (auto x : gr[i]) cout << x.ff << sp << x.ss << nl;
    //     }
    // }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}