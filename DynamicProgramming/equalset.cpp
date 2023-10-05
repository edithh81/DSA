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
int n,S, a[MAX];
ll dp[501][100001];
void solve(){
    ll S = 0;
    for (int i=1; i<=n; i++)
        S+=i;
    
    if (S&1){
        cout << 0;
        return;
    }
    S/=2;
    dp[0][0] = 1;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=S; j++){
            dp[i][j] = dp[i-1][j];
            if (j>=i)
                dp[i][j] += dp[i-1][j-i]%MOD;
            
            dp[i][j]%=MOD;
        }
    }
    cout << dp[n][S];
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;

    solve();
    return 0;
}