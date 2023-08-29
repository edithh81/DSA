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
int t, n;
vector<string> grid;
bool check(){
    for (int i=1; i<n; i++)
            for (int j=0; j<n; j++)
                if (grid[i][j]<grid[i-1][j])
                    return false;

    return true;
}
void solve(){
    while (t--){
        cin >> n;
        string tmp;
        for (int i=0; i<n; i++){
            cin >> tmp;
            sort(tmp.begin(), tmp.end());
            grid.push_back(tmp);
        }
        if (check())
            cout << "YES" << endl;
        else    
            cout <<"NO" << endl;
        grid.clear();
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> t;
    solve();
    return 0;
}