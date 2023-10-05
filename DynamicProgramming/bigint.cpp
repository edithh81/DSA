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
string s1, s2;
int n,m;
ll F[1005][1005];
void solve(){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if (s1[i] == s2[j])
                F[i][j] = F[i-1][j-1]+1;
            else
                F[i][j] = max(F[i-1][j], F[i][j-1]);
        }
    }
    cout << F[n][m];
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> s1 >> s2;
    n = s1.length(); m = s2.length();
    s1 = '0' + s1;
    s2 = '0' + s2;
    solve();
    return 0;
}