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
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    ll sum = 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] <= sum)
        {
            sum += a[i];
        }
        else
            break;
    }
    cout << sum << nl;
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