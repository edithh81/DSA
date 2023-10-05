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
int n,m, a[505][505];
void solve(){
    vector<vector<ll>> path(n+1, vector<ll>(m+1, 0));
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if (i==1 && j==1)
                path[i][j]=a[i][j];
            else if (i==1)
                path[i][j]=a[i][j] + path[i][j-1];
            else if (j==1)
                path[i][j]=a[i][j] + path[i-1][j];
            else
                path[i][j]=a[i][j] + max({path[i][j-1], path[i-1][j],path[i-1][j-1]});
        }
    }
    cout << path[n][m];
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> m;
    FOR(i,1,n)
        FOR(j,1,m)
            cin >> a[i][j];

    solve();
    return 0;
}