#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define REP(i, b) for(int i = 0; i < b; i++)
#define PER(i, b) for(int i = b - 1; i >= 0; i--)
#define fi first
#define se second
#define all(x) x.begin(),x.end()
using pii = pair<int, int>;
const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, 1, 0, -1};
int a[1005][1005];
int m,n;
int dp[1005][1005];
bool visited[1005][1005];
void init(){
    cin >> m >> n;
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            cin >> a[i][j];
            visited[i][j] = false;
            dp[i][j] = 0;
        }
    }
}
int bfs(){
    queue<pii> q;
    q.push({1,1});
    dp[1][1] = 0;
    while (!q.empty()){
        pii f = q.front(); q.pop();
        if (f.first == m and f.second == n) return dp[m][n];
        int i = f.first, j = f.second;
        if (i + a[i][j] <= m && !visited[i+a[i][j]][j]){
            q.push({i+a[i][j], j});
            visited[i+a[i][j]][j] = true;
            dp[i+a[i][j]][j] = dp[i][j]+1;
        }
        if (j + a[i][j] <= n && !visited[i][j+a[i][j]]){
            q.push({i, j+a[i][j]});
            visited[i][j+a[i][j]] = true;
            dp[i][j+a[i][j]] = dp[i][j]+1;
        }
    }
    return -1;
}
void solve(){
    int T;
    cin >> T;
    while (T--){
        init();
        cout << bfs() << endl;
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    solve();
    return 0;
}