// Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair

bool comp(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second;
}

void solve()
{
    int i, j, n;
    cin >> n;
    std::vector<pair<int, int>> v, u;
    for (i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.pb(mp(x, y));
    }

    int ans = 0, pre = 0;
    sort(v.begin(), v.end(), comp);

    for (auto x : v)
    {
        if (x.ff >= pre)
        {
            ans++;
            pre = x.ss;
        }
    }

    cout << ans << nl;
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