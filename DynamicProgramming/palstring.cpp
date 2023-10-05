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
string s;
int n;
int F[1005][1005];
void solve(){
    n = s.length();
    s = '@'+s;
    for (int i=1; i<=n; i++)
        F[i][i] = 1;
    int ans = 1;
    for (int len = 2; len<=n; len++){
        for (int i=1; i<=n-len+1; i++){
            int j = i+len-1;
            if (len == 2)
                F[i][j] = (s[i]==s[j]);
            else
               F[i][j] = (s[i]==s[j] && F[i+1][j-1]); 
            if (F[i][j]==1)
                ans = max(ans, len);
        }
    }
    cout << ans;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> s;
    solve();
    return 0;
}