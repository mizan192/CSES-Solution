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
#define chk cout << "\n------aci------"
#define see(a) cerr << #a << "=" << a << "\n"
#define see2(a, b) cerr << #a << "=" << a << "   " << #b << "=" << b << "\n"
void vsee(vector<int> &v)
{
    for (auto x : v)
        cout << x << sp;
}
void solve()
{
    int i, j, n, q, m, k;
    cin >> n >> m >> k;
    int aprt[n], people[m];
    lop(i, n) cin >> aprt[i];
    lop(i, m) cin >> people[i];
    sort(aprt, aprt + n);
    sort(people, people + m);
    i = 0;
    j = 0;
    int cnt = 0;
    while (i < n && j < m)
    {
        int choice = abs(aprt[i] - people[j]);
        if (choice <= k)
        {
            cnt++;
            i++;
            j++;
        }
        else if (aprt[i] < people[j])
            i++;
        else
            j++;
    }
    cout << cnt << nl;
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