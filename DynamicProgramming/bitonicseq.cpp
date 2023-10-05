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
int n, a[MAX];
void solve(){
    vector<ll> dp1(MAX, 0);
    vector<ll> dp2(MAX, 0);
    for (int i=1; i<=n; i++)
        dp1[i]=dp2[i]=a[i];
    // increase arr
    for (int i=1; i<=n; i++){
        for (int j=1; j<i; j++)
            if (a[i] > a[j])
                dp1[i] = max(dp1[i], dp1[j]+a[i]);
    }
    // decrease arr
    for (int i=n-1; i>0; i--){
        for (int j=n; j>i; j--)
            if (a[i] > a[j])
                dp2[i] = max(dp2[i], dp2[j]+a[i]);
    }
    ll res = INT_MIN;
    for (int i=1; i<=n; i++)
        res = max(res, dp1[i]+dp2[i]-a[i]);
    cout << res;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    
    solve();
    return 0;
}