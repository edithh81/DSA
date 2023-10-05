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
string s1, s2, s3;
int n,m, p;
ll F[105][105][105];
void solve(){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            for (int k=1; k<=p; k++){
                if (s1[i] == s2[j] && s2[j] == s3[k])
                    F[i][j][k] = F[i-1][j-1][k-1]+1;
                else
                    F[i][j][k] = max({F[i-1][j][k], F[i][j-1][k], F[i][j][k-1]});
            }
        }
    }
    cout << F[n][m][p];
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> s1 >> s2 >> s3;
    n = s1.length(); m = s2.length(); p = s3.length();
    s1 = '0' + s1;
    s2 = '0' + s2;
    s3 = '0' + s3;
    solve();
    return 0;
}