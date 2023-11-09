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
vector<int> adj[MAX];
bool visited[MAX];
int parent[1005];
int n,m;
bool dfs(int u){
    visited[u] = true;
    for (int x:adj[u]){
        if (!visited[x]){
            parent[x] = u;
            if (dfs(x)) return true;
        }
        else if (x != parent[u])
            return true;
    }
    return false;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> m;
    int vertex = INT_MAX;
    for (int i=1; i<=m; i++){
        int x,y;
        cin >> x >> y;
        vertex = min({x,y,vertex});
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i=1; i<=n; i++){
        visited[i] = false;
        sort(all(adj[i]));
    }
    for (int i=1; i<=n; i++){
        if (!visited[i] && dfs(i)){
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}