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
    for (i = 0; i < n; i++)
        cin >> a[i];

    // ll sum = 0, ans = LLONG_MIN;
    // for (i = 0; i < n; i++) {
    // 	sum = max(a[i], sum + a[i]);
    // 	ans = max(sum, ans);
    // }
    // cout << ans << nl;

    // dp solution
    ll dp[n];
    ll res = a[0];
    dp[0] = a[0];
    for (i = 1; i < n; i++)
    {
        dp[i] = max(a[i], dp[i - 1] + a[i]);
        res = max(res, dp[i]);
    }

    cout << res << nl;
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