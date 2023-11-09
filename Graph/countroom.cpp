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
char a[1005][1005];
bool visited[MAX];
int n,m;
bool isValid(int i, int j){
    return i>0 && i<=n && j>0 && j<=m && a[i][j] == '.';
}
void dfs(int i, int j){
    a[i][j] = '#';
    for (int k = 0; k < 4; k++){
        int i1 = i + dx[k], j1 = j+ dy[k];
        if (isValid(i1, j1))
            dfs(i1, j1);
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++)
            cin >> a[i][j];
    }
    int cnt = 0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if (a[i][j] == '.'){
                ++cnt, dfs(i,j);
            }

        }
    }
    cout << cnt;
    return 0;
}