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
set <int> adj[1005];
vector<pii> edge;
bool visited[1005];
int parent[1005];
int n,m;
void dfs(int u){
    visited[u] = true;
    for (int x:adj[u]){
        if (!visited[x]){
            parent[x] = u;
            dfs(x);
        }
    }
}
int countcc(){
    int cc = 0;
    for (int i=1; i<=n; i++){
        if (!visited[i]){
            ++cc;
            dfs(i);
        }
    }
    return cc;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> m;
    for (int i=1; i<=m; i++){
        int x,y;
        cin >> x >> y;
        adj[x].insert(y);
        adj[y].insert(x);
        edge.push_back({x,y});
    }
    for (int i=1; i<=n; i++)
        visited[i] = false;
    
    int cc = countcc();
    int ans = 0;
    for (pii it : edge){
        int x1 = it.first, x2 = it.second;
        adj[x1].erase(x2);
        adj[x2].erase(x1);
        memset(visited, false, sizeof(visited));
        if (cc < countcc())
            ++ans;
        
        adj[x1].insert(x2);
        adj[x2].insert(x1);
    }
    cout << ans;
    return 0;
}