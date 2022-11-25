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
#define chk cout << "\n------aci-----"
#define vsort(q) sort(q.begin(), q.end())
#define vsortr(q) sort(q.rbegin(), q.rend())

void solve()
{
    int i, j, n, m;
    cin >> n >> m;

    std::vector<int> v(n + 2), position(n + 2);

    for (i = 1; i <= n; i++)
    {
        cin >> v[i];
        position[v[i]] = i;
    }

    int sum = 1;
    for (i = 1; i < n; i++)
    {
        if (position[i] > position[i + 1])
            sum++;
    }

    set<pair<int, int>> update;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        if (v[x] + 1 <= n)
            update.insert({v[x], v[x] + 1});
        if (v[x] - 1 >= 1)
            update.insert({v[x] - 1, v[x]});
        if (v[y] + 1 <= n)
            update.insert({v[y], v[y] + 1});
        if (v[y] - 1 >= 1)
            update.insert({v[y] - 1, v[y]});

        for (auto it : update)
        {
            if (position[it.ff] > position[it.ss])
                sum--;
        }

        swap(v[x], v[y]);
        position[v[x]] = x;
        position[v[y]] = y;
        for (auto it : update)
        {
            if (position[it.ff] > position[it.ss])
                sum++;
        }
        cout << sum << nl;
        // cerr << sum << nl;

        update.clear();
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