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
vector<ll> v;
int find(ll x){
    ll cnt = 0;
    for (int i=0; i<(int)v.size(); i++){
        if (v[i] < x)
            ++cnt;
        else break;
    }
    return cnt;
}
void solve(){
    int T; cin >> T;
    queue<ll> q;
    q.push(1);
    while(true){
        ll u = q.front(); q.pop();
        if (u >= 1e18)  break;
        v.push_back(u);
        q.push(1ll*u*10);
        q.push(1ll*u*10+1);
    }
    while (T--){
        ll x;
        cin >> x;
        cout << find(x) << endl;
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    solve();
    return 0;
}