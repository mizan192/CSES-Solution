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

map<int, vector<int>> m;
int n, x;

void result(int a, int b, int c)
{
    if (a == b && b == c)
    {
        cout << m[a][0] << sp << m[a][1] << sp << m[a][2] << nl;
    }
    else if (a == b)
    {
        cout << m[a][0] << sp << m[a][1] << sp << m[c][0] << nl;
    }
    else if (a == c)
    {
        cout << m[a][0] << sp << m[a][1] << sp << m[b][0] << nl;
    }
    else if (c == b)
    {
        cout << m[b][0] << sp << m[b][1] << sp << m[a][0] << nl;
    }
    else
    {
        cout << m[a][0] << sp << m[b][0] << sp << m[c][0] << nl;
    }
}

void solve()
{
    int i, j;
    cin >> n >> x;
    int ar[n];

    lop(i, n)
    {
        cin >> ar[i];
        m[ar[i]].pb(i + 1);
    }
    sort(ar, ar + n);
    for (i = 0; i + 3 <= n; i++)
    {
        int a = ar[i], b, c;
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            b = ar[l], c = ar[r];
            int sum = a + b + c;
            if (sum == x)
            {
                result(a, b, c);
                return;
            }
            else if (sum < x)
                l++;
            else
                r--;
        }
    }
    cout << "IMPOSSIBLE" << nl;
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