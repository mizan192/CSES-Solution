//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define br cout<<"\n"
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define chk cout<<"\n------aci-----"
#define vsort(q) sort(q.begin(),q.end())
#define vsortr(q) sort(q.rbegin(),q.rend())
#define MAX 100005

int n, m;
std::vector<int> gr[MAX];
bool vis[MAX];
std::vector<int> v;

void dfs(int node) {
    vis[node] = 1;
    for (auto child : gr[node]) {
        if (!vis[child]) dfs(child);
    }
}

void solve()
{
    int i, j;
    cin >> n >> m;
    lop(i, m) {
        int a, b;
        cin >> a >> b;
        gr[a].pb(b);
        gr[b].pb(a);
    }

    int cnt = 0;


    for (i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
            v.pb(i);
        }
    }


    cnt = v.size();

    if (cnt == 1) cout << 0 << nl;
    else {
        cout << cnt - 1 << nl;
        int pre = v[0];
        for (i = 1; i < v.size(); i++) {
            cout << pre << sp << v[i] << nl;
            pre = v[i];
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}