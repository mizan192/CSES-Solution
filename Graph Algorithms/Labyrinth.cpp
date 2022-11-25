
#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define br cout << "\n"
#define pb push_back
#define lop(i, n) for (i = 0; i < n; i++)
// 2D grid Connected Component
int n, m, sx, sy, ex, ey;
char ch[1001][1001], sign[1001][1001];
bool vis[1001][1001];
std::vector<char> v;
int dist[1001][1001], parent[1001][1001];

int dx[] = {-1, +0, +1, +0};
int dy[] = {+0, +1, +0, -1};

// zero based
bool isValid(int x, int y)
{
    if (x < 0 || y < 0 || x >= n || y >= m)
        return false;
    if (dist[x][y] != INT_MAX || ch[x][y] == '#')
        return false;
    else
        return true;
}

void bfs(int x, int y)
{

    dist[x][y] = 0;
    queue<pair<int, int>> q;
    q.push({x, y});

    parent[x][y] = -1;

    while (!q.empty())
    {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int aa = a + dx[i];
            int bb = b + dy[i];
            if (isValid(aa, bb))
            {
                dist[aa][bb] = dist[a][b] + 1;
                parent[aa][bb] = i;
                q.push({aa, bb});
            }
        }
    }
}

void solve()
{
    int i, j;
    cin >> n >> m; // row, column

    lop(i, n)
    {
        lop(j, m)
        {
            dist[i][j] = INT_MAX;
        }
    }

    lop(i, n)
    {
        lop(j, m)
        {
            cin >> ch[i][j];
            if (ch[i][j] == 'A')
            {
                sx = i, sy = j;
            }
            if (ch[i][j] == 'B')
            {
                ex = i, ey = j;
            }
        }
    }

    bfs(sx, sy);

    if (dist[ex][ey] != INT_MAX)
    {

        cout << "YES\n";
        cout << dist[ex][ey] << nl;

        int x = ex, y = ey;

        // int dx[] = { -1, +0, +1, +0};
        // int dy[] = { +0, +1, +0, -1};

        while (parent[x][y] != -1)
        {

            int pos = parent[x][y];
            // pos  is index of dx and dy
            if (pos == 0)
            {
                v.pb('U');
                x += 1;
            }
            else if (pos == 1)
            {
                v.pb('R');
                y -= 1;
            }
            else if (pos == 2)
            {
                v.pb('D');
                x -= 1;
            }
            else if (pos == 3)
            {
                v.pb('L');
                y += 1;
            }
        }

        for (int i = v.size() - 1; i >= 0; i--)
            cout << v[i];
        br;
    }
    else
        cout << "NO" << nl;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
