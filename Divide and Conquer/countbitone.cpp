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
ll n,l,r;
ll DnC(ll k, ll n){
    if (n<=1ll)
        return n;
    ll tmp = log2(n)+1;
    ll x = pow(2,tmp)-1;
    if (k>x)
        return 0;
    if (k&1)
        return 1;
    if (k==x/2+1)
        return DnC(1, n%2);
    else if(k <= x/2)
        return DnC(k, n/2);
    else
        return DnC(k-x/2-1, n/2);
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> l >> r;
    ll ans = 0;
    for (ll i = l; i<=r; i++)
        ans+=DnC(i,n);
    cout << ans;
    return 0;
}