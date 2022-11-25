//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define pb push_back
#define ll long long int
void smile();
#define MAX 100001
vector<int> gr[MAX];
bool vis[MAX];
int color[MAX];

bool dfs(int node, int colr) {
	vis[node] = 1;
	color[node] = colr;
	for (auto v : gr[node]) {
		if (vis[v] == 0) {
			bool res = dfs(v, colr ^ 1);
			if (res == false) return false;
		}
		if (color[v] == colr) return false;
	}
	return true;
}

int main()
{
	smile();
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		gr[a].pb(b);
		gr[b].pb(a);
	}

	bool colorable = true;
	//colorable = dfs(1, 0);

	for (int i = 1; i <= n; i++) {
		if (vis[i] == 0) {
			colorable = dfs(i, 0);
			if (colorable == false) break;
		}
	}

	if (!colorable) cout << "IMPOSSIBLE" << nl;
	else {
		for (int i = 1; i <= n; i++) cout << color[i] + 1 << " ";
	}


	return 0;
}


void smile() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}