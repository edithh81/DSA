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
vector<int> adj[MAX];
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            cin >> matr[i][j];
    
    for (int i=1; i<=n; i++){
        for (int j=i+1; j<=n; j++){
            if (matr[i][j]){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=0; j<adj[i].size(); j++){
            if (i > adj[i][j]){
                cout << i << ' ' << adj[i][j] << endl;
            }
        }
    }
    cout << endl;
    for (int i=1; i<=n; i++){
        cout << i << " : ";
        sort(all(adj[i]));
        for (int j=0; j<adj[i].size(); j++){
            cout << adj[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}