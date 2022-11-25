//Bismillahir Rahmanir Raheem
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
#define chk cout << "\n------aci------"
#define see(a) cerr << #a << "=" << a << "\n"
#define see2(a, b) cerr << #a << "=" << a << "   " << #b << "=" << b << "\n"

void solve()
{
    int i, j, a, b, n;
    cin >> n >> a >> b;
    ll ar[n];
    lop(i, n) cin >> ar[i];

    ll sum = INT_MIN, ans = INT_MIN;
    int start = 0;
    for (i = 0; i < n; i++)
    {
        if (i + 1 > a)
        {
            ans = max(ans, sum);
        }
        sum = sum + ar[i];
    }

    cout << ans << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}