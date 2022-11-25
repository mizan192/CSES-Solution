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
#define see(a) cerr << #a << "=" << a << "\n"
#define see2(a, b) cerr << #a << "=" << a << "   " << #b << "=" << b << "\n"
vector<ll> v;
void solve()
{
    ll i, j, n, x, y;
    cin >> x >> y;
    ll ans;
    if (x < y)
    {
        if (y % 2 == 0)
        {
            ans = (y - 1) * (y - 1) + x;
        }
        else
        {
            ans = (y * y) - x + 1;
        }
    }
    else
    {
        if (x % 2 == 0)
        {
            ans = (x * x) - y + 1;
        }
        else
        {
            ans = (x - 1) * (x - 1) + y;
        }
    }
    cout << ans << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}