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
int color[1005];
int n,m, s;
bool bfs(int u){
    queue<int> q;
    color[u] = 0; // red
    q.push(u);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for (int x:adj[v]){
            if (color[x] == -1){
                color[x] = 1-color[v]; // blue
                q.push(x);
            }
            else if (color[x] == color[v])
                return false;
        }
    }
    return true;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> m ;
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
    memset(color, -1, sizeof(color));
    color[0] = 1;
    for (int i=1; i<=n; i++){
        if (color[i] == -1){
            if (!bfs(i)){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}