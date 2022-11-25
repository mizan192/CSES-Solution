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
    int i, j, n;
    cin >> n;
    int a[n];
    vector<pair<int, int>> v;
    lop(i, n)
    {
        cin >> a[i];
        v.pb(mp(a[i], i + 1));
    }
    vsort(v);
    int cnt = 0, pre = n + 1;
    for (auto x : v)
    {
        int value = x.ff, pos = x.ss;
        if (pre > pos)
        {
            cnt++;
        }
        pre = pos;
    }
    cout << cnt << nl;
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