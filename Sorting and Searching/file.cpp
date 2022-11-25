//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define br cout << "\n"
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define INMX INT_MAX
#define MOD 1000000007
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ll long long int
#define lop(i, n) for (i = 0; i < n; i++)
#define lop1(i, n) for (i = 1; i <= n; i++)

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b) { return ((a * b) / gcd(a, b)); }

void solve()
{
    ll i, j, k, l, r, n;
    cin >> l >> r >> k;
    ll element = (r - l) + 1;

    if (element == 1)
    {
        if (r == 1)
            no;
        else
            yes;
        return;
    }

    ll odd = element / 2, even = element / 2;
    if (element % 2 == 1)
    {
        if (l % 2 == 1)
            odd++;
        else
            even++;
    }
    ll mn = min(odd, even);
    if (even >= odd)
    {
        if (k >= mn)
            yes;
        else
            no;
        return;
    }

    if (k >= mn + 1)
        yes;
    else
        no;

    // if (k >= mn) yes;
    // else no;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //seive(MAX);

    cin >> t;
    // cin.ignore();
    while (t--)
    {
        solve();
    }

    return 0;
}