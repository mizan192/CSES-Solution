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

void solve()
{
    int i, j, n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << nl;
        return;
    }
    if (n <= 3)
    {
        cout << "NO SOLUTION\n";
        return;
    }
    int od, ev;
    if (n % 2 == 0)
    {
        ev = n;
        od = n - 1;
    }
    else
    {
        od = n;
        ev = n - 1;
    }
    while (od >= 1)
    {
        cout << od << sp;
        od -= 2;
    }
    while (ev > 1)
    {
        cout << ev << sp;
        ev -= 2;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}