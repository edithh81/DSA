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
int n,m;
ll dp[15][1005];
void solve(){   
    for (int i=0; i<=n; i++){
        for (int j=0; j<=m; j++){
            if (i==0 || j==0){
                dp[i][j] = 1;
                continue;
            }
            dp[i][j] = dp[i-1][j-1] + dp[i-2][j-1] + dp[i-1][j-2];
            dp[i][j] %= MOD;
        }
    }
    cout << dp[n][m];
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> m;
    solve();
    return 0;
}