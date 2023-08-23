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
int n,s,a[1005], X[1005];
int cnt = MAX;

void Try(int i, int sum, int pos){
    for (int j=pos; j<=n; j++){
        if (sum + a[j] <= s){
            X[i] = a[j];
            if (sum + a[j] == s)
                cnt = min (cnt, i);
            else  
                Try(i+1, sum + a[j], j+1);
        }
        else    
            break;
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> s;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    sort(a+1,a+n+1);
    Try(1,0,1);
    if (cnt == MAX)
        cout << -1;
    else
        cout << cnt;
    return 0;
}
