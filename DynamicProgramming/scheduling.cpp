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
ll F[MAX];
struct job{
    int start, end, money;
};
vector<job> v(n+1);
bool cmp(job a, job b){
    return a.end < b.end;
}
int find(int idx){
    int l = 0, r = idx -1, res = -1;
    while(l<=r){
        int m = (l+r)/2;
        if (v[m].end < v[idx].start){
            res = m;
            l = m+1;
        }
        else
            r = m-1;
    }
    return res;
}
void solve(){
    ll ans[MAX];
    ans[0] = v[0].money;
    for (int i=1; i<n; i++){
        ll res = v[i].money;
        int idx = find(i);
        if (i!=-1)
            res+=ans[i];
        ans[i] = max(res, ans[i-1]);
    }
    cout << ans[n-1];
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> v[i].start >> v[i].end >> v[i].money;
    sort(all(v), cmp);
    solve();
    return 0;
}