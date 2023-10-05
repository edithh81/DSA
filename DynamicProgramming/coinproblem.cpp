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
int n, k, a[MAX];
ll F[MAX];
// F[i]: số đồng xu tối thiểu để có được lượng tiền i
// F[s]: đáp án của bài toán
// F[0] = 0
void solve(){
    for (int i=0; i<MAX; i++)
        F[i] = LINF;
    F[0] = 0;
    for (int i=1; i<=k; i++){
        for (int j=1; j<=n; j++){
            if (i>=a[j])
                F[i] = min(F[i], F[i-a[j]]+1);
            
        }
    }
    cout << (F[k]!=LINF?F[k] :-1);
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> k;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    
    solve();
    return 0;
}