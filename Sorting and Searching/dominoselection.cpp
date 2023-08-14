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
int a,b,n;
bool isValid(ll x){
    return 1ll*(x/a)*(x/b)>=n;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> a >> b >> n;
    ll l = 0, r = 1ll*max(a,b)*n;
    ll res = LINF;
    while (l<=r){
        ll m = (l+r)/2ll;
        if (isValid(m)){
            res = min(res,m);
            r = m-1;
        }
        else 
            l=m+1;
    }
    cout << res << endl;
    return 0;
}