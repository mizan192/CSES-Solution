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
#define see(a) cerr << #a << "=" << a << "\n"
#define see2(a, b) cerr << #a << "=" << a << "   " << #b << "=" << b << "\n"
void vshow(vector<int> v)
{
    for (auto x : v)
        cout << x << " ";
}
void vpshow(vector<pair<int, int>> v)
{
    for (auto x : v)
        cout << x.first << " " << x.second << "\n";
}
void mshow(map<int, int> m)
{
    for (auto x : m)
        cout << x.first << " " << x.second << "\n";
}

void solve()
{
    int i, j, n, k;
    cin >> n >> k;
    int a[n];
    multiset<int> st;
    lop(i, n)
    {
        cin >> a[i];
        st.insert(a[i]);
    }

    while (k--)
    {

        int x;
        cin >> x;

        auto it = st.upper_bound(x);

        if (it == st.begin())
        {
            cout << -1 << nl;
        }
        else
        {
            int mxValue = *(--it);
            cout << mxValue << nl;
            st.erase(it);
        }
    }
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