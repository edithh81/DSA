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
ll n,k;
ll binpow(ll n){
    if (n==0)
        return 1ll;
    if (n==1)
        return 2ll;
    ll x = binpow(n/2);
    if (n&1)
        return ((x%MOD)*(x%MOD)*2)%MOD;
    return ((x%MOD)*(x%MOD))%MOD;
}
ll solve(ll n, ll k){
    ll x = binpow(n-1);
    if (k==x)
        return n;
    if (k<x)
        return solve(n-1,k);
    else
        return solve(n-1,k-x);
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> k;
    ll res = solve(n,k);
    cout << res;
}