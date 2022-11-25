// Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define ll long long int

void solve()
{
    int i, j, n;
    cin >> n;
    ll a[n];
    std::vector<ll> v;
    std::map<ll, ll> m;
    std::vector<pair<ll, ll>> u;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }

    for (auto x : m)
    {
        v.pb(x.ff);
        u.pb(mp(x.ss, x.ff));
    }
    sort(v.begin(), v.end());

    ll md = v.size() / 2;
    ll siz = v.size() - 1;
    ll ans = LLONG_MAX;
    ll start = max(0LL, md - 1), ed = min(siz, md + 1);
    for (i = start; i <= ed; i++)
    {
        ll value = v[i], sum = 0;
        for (auto x : m)
        {
            ll d = abs(value - x.ff);
            d = d * x.ss;
            sum += d;
        }
        ans = min(ans, sum);
    }

    sort(u.rbegin(), u.rend());
    for (i = 0; i < u.size(); i++)
    {
        ll value = u[i].ss, sum = 0;
        for (auto x : m)
        {
            ll d = abs(value - x.ff);
            d = d * x.ss;
            sum += d;
        }
        if (sum >= ans)
            break;
        ans = min(ans, sum);
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