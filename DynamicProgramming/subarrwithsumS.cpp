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
int n,S, a[MAX];
void solve(){
    vector<bool> dp(S+1, false);
    dp[0]=true;
    for (int i=0; i<n; i++){
        for (int j=S; j>=a[i]; --j){
            if (dp[j-a[i]])
                dp[j]=true;
        }
    }
    if (dp[S])
        cout << "1";
    else
        cout << "0";
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> S;
    for (int i=1; i<=n; i++)
        cin >> a[i];

    solve();
    return 0;
}