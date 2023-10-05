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
int T,n;
bool isPrime[MAX];
ll dp[MAX];
void init(){
    for (int i=0; i<MAX; i++)
        isPrime[i]=true;
    isPrime[0]=false; isPrime[1]=false;
    for (int i=2; i<=sqrt(MAX); i++){
        if (isPrime[i]){
            for (int j = i*i; j<MAX; j+=i)
                isPrime[j]=false;
        }
    }
    dp[0]=1; dp[1]=1;
    for (int i=2; i<MAX; i++){
        if (isPrime[i])
            dp[i]=((dp[i-1]%MOD)*(i%MOD))%MOD;
        else
            dp[i]=dp[i-1];
    }
}
void solve(){
    cout << dp[n] << endl;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> T;
    init();
    while(T--){
        cin >> n;
        solve();
    }
    return 0;
}