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
int n,k;
ll mul(ll a, ll b){
    if (b==0)
        return 0ll;
    ll tmp = mul(a,b/2);
    if (b&1)
        return (tmp*2+a) % MOD;
    return tmp*2%MOD;
}
ll binpow(ll a, ll b){
    if (b == 0)   
        return 1;
    if (b==1)
        return a%MOD;
    ll tmp = binpow(a,b/2);
    ll ans = mul(tmp, tmp);
    if (b&1)
        return (a%MOD)*(ans%MOD)%MOD;
    return (ans%MOD);
}

int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> k;
    ll res = binpow(n,k);
    cout << res;
    return 0;
}