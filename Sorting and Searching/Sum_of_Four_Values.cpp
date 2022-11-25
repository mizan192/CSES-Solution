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
#define MAX 100000
#define MOD 1000000007
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ll long long int
#define ull unsigned long long int
#define scnf(a) scanf("%d", &a)
#define scnfl(a) scanf("%lld", &a)
#define scnf2(a, b) scanf("%d %d", &a, &b)
#define scnf2l(a, b) scanf("%lld %lld", &a, &b)
#define lop(i, n) for (i = 0; i < n; i++)
#define lop1(i, n) for (i = 1; i <= n; i++)
#define pi 3.14159265358979323846
#define vpl vector<pair<ll, ll>>
#define vpi vector<pair<int, int>>
#define vsort(q) sort(q.begin(), q.end())
#define vsortr(q) sort(q.rbegin(), q.rend())
#define mset(aa) memset(aa, 0, sizeof(aa))
#define debug cout << "\n---------hi--------"
#define see(a) cerr << #a << "=" << a << "\n"
#define see2(a, b) cerr << #a << "=" << a << "   " << #b << "=" << b << "\n"
#define see3(a, b, c) cerr << #a << "=" << a << "   " << #b << "=" << b << "   " << #c << "=" << c << "\n"
#define iterate(it, x) for (auto it = x.begin(); it != x.end(); it++)
#define itertaRevers(it, x) for (auto it = x.rbegin(); it != x.rend(); it++)

template <class T>
void vprint(vector<T> v)
{
    for (T i : v)
    {
        cout << i << " ";
    }
    cout << "\n";
}
template <class T>
void vsee(vector<T> &v)
{
    cerr << "vec : [ ";
    for (T i : v)
        cerr << i << " ";
    cerr << "]";
}
template <class T, class V>
void mprint(map<T, V> v)
{
    for (auto i : v)
        cout << i.first << " " << i.second << "\n";
}
template <class T, class V>
void msee(map<T, V> v)
{
    for (auto i : v)
        cerr << i.first << " -> " << i.second << "\n";
}
template <class T, class V>
void vpsee(vector<pair<T, V>> v)
{
    for (auto i : v)
        cerr << i.first << " -> " << i.second << "\n";
}
template <class T, class V>
void vpprint(vector<pair<T, V>> v)
{
    for (auto i : v)
        cout << i.first << " " << i.second << "\n";
}
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
void mshow(std::map<int, int> m)
{
    for (auto x : m)
        cout << x.first << " " << x.second << "\n";
}

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return ((a * b) / gcd(a, b)); }
ll sumDigt(ll x)
{
    ll sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
ll factorial(ll n)
{
    ll i, ans = 1;
    for (i = n; i > 1; i--)
    {
        ans *= i;
    }
    return ans;
}
bool isPrime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
ll stringToNum(string &s)
{
    ll num = 0;
    for (int i = 0; i < s.size(); i++)
    {
        num = (num * 10) + s[i] - '0';
    }
    return num;
}
void inputVector(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.pb(a);
    }
}

void solve()
{
    int i, j, k, n, len, ln, cnt = 0, cunt = 0, sum = 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    // cin.ignore();
    while (t--)
    {
        solve();
    }

    return 0;
}