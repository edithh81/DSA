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
    int n, target;
    cin >> n >> target;
    for (int &x:a)
        cin >> x;
    ll res = 0, cnt =0;
    map<ll,int> m;
    for (int i=0; i<n; i++){
        res+=a[i];
        if (res == target)
            ++cnt;
        if (m.find(res-target)!=m.end())
            cnt+=m[res-target];
        
        m[res]++;
    }
    cout << cnt;
    return 0;
}