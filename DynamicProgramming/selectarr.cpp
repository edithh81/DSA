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
int n, m, a[MAX];
ll dp[MAX][105];
void solve(){
    if (!a[1])
        for (int i=1; i<=m; i++) dp[1][i] = 1;
    else
        dp[1][a[1]] = 1;
    for (int i=2; i<=n; i++){
        if (a[i]){
            dp[i][a[i]] = dp[i-1][a[i]-1] + dp[i-1][a[i]] + dp[i-1][a[i]+1];
            dp[i][a[i]] %= MOD;
        }
        else{
            for (int j=1; j<=m; j++){
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1];
                dp[i][j] %= MOD;
            }
        }
    }
    ll res = 0;
    for (int i=1; i<=m; i++){
        res+=dp[n][i];
        res%=MOD;
    }
    cout << res;

}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> m;
    for (int i=1; i<=n; i++)
        cin >> a[i];

    solve();
    return 0;
}