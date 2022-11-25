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
	map<int, int> m;
	set<int> st;
	std::vector<int> v;
	lop(i, n)
	{
		cin >> ar[i];
		v.pb(ar[i]);
	}
	sort(ar, ar + n);
	int mn = ar[0];
	sort(v.rbegin(), v.rend());

	j = v.size() - 1;
	int cnt = 0;

	for (i = 0; i <= j; i++) {

		if (v[i] + v[j] <= k) {
			cnt++;
			j--;
		}
		else cnt++;
	}
	cout << cnt << nl;




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