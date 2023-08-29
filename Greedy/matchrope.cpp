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
int n;
int a[MAX];
void solve(){
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll res = 0;
    for (int i=0; i<n; i++)
        pq.push(a[i]);
    while(pq.size()>1){
        ll tmp1=1ll*pq.top(); pq.pop();
        ll tmp2=1ll*pq.top(); pq.pop();
        res+=tmp1+tmp2;
        pq.push(tmp1+tmp2);
    }
    cout << res;
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