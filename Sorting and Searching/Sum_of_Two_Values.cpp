//Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define br cout << "\n"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define ll long long int
#define lop(i, n) for (i = 0; i < n; i++)
#define chk cout << "\n------aci------"
#define see(a) cerr << #a << "=" << a << "\n"
#define see2(a, b) cerr << #a << "=" << a << "   " << #b << "=" << b << "\n"

void solve()
{
    int i, j, k, n;
    cin >> n >> k;
    int ar[n];
    int ok = 0;
    map<int, int> m;
    std::vector<int> v;
    int l, r;
    lop(i, n)
    {
        cin >> ar[i];
        int a = k - ar[i];
        if (ok == 0 && a != 0 && m[a] >= 1)
        {
            l = m[a];
            r = i + 1;
            ok = 1;
        }
        m[ar[i]] = i + 1;
    }
    if (ok)
        cout << l << sp << r << nl;
    else
    {
        //cout << -1 << nl;
        cout << "IMPOSSIBLE" << nl;
    }
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