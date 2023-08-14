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
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    
    ll res = 0, ans = 0;
    map<ll,int> mp;
    for (int i=0; i<n; i++){
        res = ((res+a[i])%n+n)%n; // formula for negative num
        if (res == 0)
            ++ans;
        if (mp.count(res))
            ans+=mp[res];
        mp[res]++;
    }
    cout << ans;
    
}