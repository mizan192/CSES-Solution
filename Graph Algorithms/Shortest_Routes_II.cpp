// Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
// time complexity : O(n3)
using namespace std;
#define sp " "
#define nl "\n"
#define br cout << "\n"
#define pb push_back
#define ll long long int
#define lop(i, n) for (i = 0; i < n; i++)
#define MAX 502
#define enf 1e12

ll n, m, q;
ll cost[MAX][MAX];

void floydWarshall()
{
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j;
    cin >> n >> m >> q;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            cost[i][j] = enf;
        }
    }

    lop(i, m)
    {
        ll u, v, c;
        cin >> u >> v >> c;
        cost[u][u] = 0;
        cost[v][v] = 0;
        cost[u][v] = min(cost[u][v], c);
        cost[v][u] = min(cost[u][v], c);
    }

    floydWarshall();

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (cost[a][b] == enf)
            cout << -1 << nl;
        else
            cout << cost[a][b] << nl;
    }

    return 0;
}
