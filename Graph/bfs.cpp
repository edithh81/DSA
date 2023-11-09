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
int n,m, s;
void bfs(int u){
    visited[u] = true;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int v = q.front();
        cout << v << ' ';
        q.pop();
        for (int x:adj[v]){
            if (!visited[x]){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> m >> s;
    for (int i=1; i<=m; i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i=1; i<=n; i++){
        visited[i] = false;
        sort(all(adj[i]));
    }
    bfs(s);
    return 0;
}