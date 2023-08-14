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
int a[MAX];
int main() {
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll l = 0, r=LINF;
    ll ans;
    while (l <= r) {
        ll m = (l + r)/2;
        ll res = 0;
        for (int i = 0; i < n; i++) {
            res += m / a[i];
            if (res >= k)
                break;
        }
        if (res >= k) {
            r = m - 1;
            ans = m;
        }
        else
            l = m + 1;
    }
    cout << ans;

}