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
int n,a[MAX];
void solve(){
    vector<int> dp(n, 1);
    for (int i=1; i<n; i++)
        if (a[i] > a[i-1])
            dp[i] = dp[i-1]+1;

    for (int i=n-2; i>-1; i--){
        if (a[i] > a[i+1])
            dp[i] = max(dp[i], dp[i+1]+1);
    }
    ll tmp = 0;
    for (int i=0; i<n; i++)
        tmp+=dp[i];
    
    cout << tmp;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    solve();
    return 0;
}