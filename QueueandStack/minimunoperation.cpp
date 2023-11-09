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
int bfs(int s, int t){
    set<int> visited;
    queue<pii> q;
    q.push({0, s});
    visited.insert(s);
    while (!q.empty()){
        pii f = q.front(); q.pop();
        if (f.second == t)  return f.first;
        if (f.second > 1 && !visited.count(f.second-1)){
            q.push({f.first+1, f.second-1});
            visited.insert(f.second-1);
        }
        if (f.second < t && !visited.count(f.second*2)){
            q.push({f.first+1, f.second*2});
            visited.insert(f.second*2);
        }
    }
    return -1;
}
void solve(){
    int T; cin >> T;
    while (T--){
        int x,y;
        cin >> x >> y;
        cout << bfs(x, y) << endl;
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    solve();
    return 0;
}