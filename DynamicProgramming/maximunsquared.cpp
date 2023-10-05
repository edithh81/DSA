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
int dp[505][505];
void solve(){
    dp[1][1] = a[1][1];
    int ans = 0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if (i==j && i==1)
                continue;
            else if (!a[i][j])
                dp[i][j] = 0;
            else
            // it must be valid for all
                dp[i][j] = min({dp[i-1][j-1], dp[i][j-1], dp[i-1][j]}) + 1;
            ans = max(ans, dp[i][j]);
        }
    }
    cout << ans;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> m;
    FOR(i,1,n)
        FOR(j,1,n)
            cin >> a[i][j];

    solve();
    return 0;
}