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
int n,k,a[MAX];
void solve(){
    ll sum1=1ll*accumulate(a+1,a+1+k,0);
    ll sum2=1ll*accumulate(a+1+k,a+1+n,0);
    ll sum3=1ll*accumulate(a+1,a+1+n-k,0);
    ll sum4=1ll*accumulate(a+1+n-k,a+1+n,0);
    
    cout << max(abs(sum1-sum2), abs(sum3-sum4));
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> k;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    sort(a+1,a+1+n);
    solve();
    return 0;
}