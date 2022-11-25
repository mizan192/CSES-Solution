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
#define MAX 100005
#define pii pair<ll,ll>
#define limit 1e18
ll n, m;
ll dist1[MAX], dist2[MAX];
bool vis[MAX];

void dijkstra(ll src, ll dist[], std::vector<pii> v[]) {
	priority_queue<pii, vector<pii>, greater<pii>>pq;

	for (ll i = 1; i < MAX; i++) dist[i] = limit;

	dist[src] = 0LL;

	pq.push({0LL, src});
	memset(vis, 0, sizeof(vis));

	while (!pq.empty()) {
		pii pu = pq.top();
		pq.pop();


		ll pr = pu.ss;

		if (vis[pr]) continue;
		vis[pr] = 1;

		for (auto child : v[pr]) {

			ll newCost = dist[pr] + child.ss;

			if (newCost < dist[child.ff]) {

				dist[child.ff] = newCost;
				pq.push({newCost, child.ff});

			}
		}
	}
}

void solve()
{
	ll i, j;
	cin >> n >> m;
	vector<pair<pair<ll, ll>, ll>> v;

	std::vector<pair<ll, ll>> gr[n + 1], gr1[n + 1];
	lop(i, m) {
		ll a, b, c;
		cin >> a >> b >> c;
		gr[a].pb(mp(b, c));
		gr1[b].pb(mp(a, c));
		v.pb(mp(mp(a, b), c));
	}

	dijkstra(1, dist1, gr);
	dijkstra(n, dist2, gr1);

	ll cost = limit;
	for (auto x : v) {
		ll a = x.ff.ff, b = x.ff.ss, c = x.ss;

		ll nodeCost = dist1[a] + dist2[b] + (c / 2);

		cost = min(cost, nodeCost);
	}

	cout << cost << nl;



}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}