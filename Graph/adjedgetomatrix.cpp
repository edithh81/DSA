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
int matr[10005][10005];
int n,m;
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    int x,y;
    cin >> n >> m;
    for (int i=1; i<=m; i++){
        cin >> x >> y;
        matr[x][y] = matr[y][x] = 1;
    }

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++)
            cout << matr[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}