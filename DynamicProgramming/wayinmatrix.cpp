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
const int dx[2] = {0, 1};
const int dy[2] = {1, 0};
int n;
char a[1005][1005];
bool isValid(int i, int j){
    return i>0 && i<=n && j>0 && j<=n && a[i][j] == '.';
}
void solve(){
    vector<vector<ll>> dp(1005, vector<ll>(1005, 0));
    dp[1][1]=(a[1][1]=='.');
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (a[i][j] == '.'){
                for (int k=0; k<2; k++){
                    int i1 = i+dx[k], j1=j+dy[k];
                    if (isValid(i1, j1)){
                        dp[i1][j1]+=dp[i][j];
                        dp[i1][j1]%=MOD;
                    }
                }
            }
        }
    }
    cout << dp[n][n];
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            cin >> a[i][j];
    solve();
    return 0;
}