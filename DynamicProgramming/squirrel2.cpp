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
int n,k, a[MAX];
void solve(){
    ll dp[MAX];
    dp[1]=0;
    dp[2]=abs(a[1]-a[2]);
    for (int i=3; i<=n; i++){
        ll tmp = LINF;
        for (int j=i-1; j>=max(1, i-k); j--){
            tmp = min(tmp, abs(a[i]-a[j])+dp[j]);
        }
        dp[i]=tmp;
    }
    cout << dp[n];
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> k;
    for (int i=1; i<=n; i++)
        cin >> a[i];

    solve();
    return 0;
}