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
int n, a[1005], final = 0;
int w[1005];
void pre(){
    for (int i=1; i<=n; i++)
        a[i]=0;
}
void sinh(){
    int i = n;
    while (i>=1 && a[i]==1){
        a[i]=0;
        --i;
    }
    if (i==0)
        final = 1; 
    else 
        a[i]=1; 
    
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> w[i];
    pre();
    ll ans = LINF;
    sinh();
    while(!final){
        ll sum1=0, sum2=0;
        for (int i=1; i<=n; i++){
            if (a[i])
                sum1+=w[i];
            else 
                sum2+=w[i];
        }
        ans = min(ans, abs(sum1-sum2));
        sinh();
    }
    cout << ans;
    return 0;
}