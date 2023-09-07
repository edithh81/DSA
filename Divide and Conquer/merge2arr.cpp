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
int n, m, k, a[MAX], b[MAX], c[MAX];

void solve(){
    int i = 1, j = 1, l=1;
    while(i<=n && j<=m){
        if (a[i] <= b[j])
            c[l++]=a[i++];
        else
            c[l++]=b[j++];
    }
    while (i<=n)
        c[l++]=a[i++];
    
    while(j<=m)
        c[l++]=b[j++];
    
    cout << c[k];
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> m >> k;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    for (int j=1; j<=m; j++)
        cin >> b[j];
    solve();
    return 0;
}