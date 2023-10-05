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
int a,b;
int dp[505][505];
void solve(int n, int m){
    for (int i=1; i<=a; i++){
        for (int j=1; j<=b; j++){
            if (i==j)
                continue;
            dp[i][j] = INF;
            for (int k=1; k<j; k++)
                dp[i][j] = min(dp[i][j], dp[i][j-k]+dp[i][k]+1);
            for (int k=1; k<i; k++)
                dp[i][j] = min(dp[i][j], dp[k][j]+dp[i-k][j]+1);
        }
    }
    cout << dp[a][b];
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> a >> b;
    solve(a,b);
    return 0;
}