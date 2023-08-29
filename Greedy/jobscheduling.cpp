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
vector<pii> v;
bool cmp(pii a, pii b){
    return a.second==b.second?a.first<b.first:a.second<b.second;
}
void solve(){
    int end_time=v[0].second;
    int res = 1;
    for (int i=1; i<n; i++){
        if (end_time < v[i].first){
            ++res;
            end_time=v[i].second;
        }
    }
    cout << res;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    int tmp = n;
    while (tmp--){
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(all(v),cmp);
    solve();
    return 0;
}