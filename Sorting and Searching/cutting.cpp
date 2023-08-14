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
int a[MAX];
bool check(int a[], int n, double m, int k){
    ll cnt = 0;
    
    for (int i=0; i<n; i++)
        cnt+=(int)(a[i]/m);
    
    return cnt >= k;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    int n,k;
    cin >> n >> k;
    for (int i=0; i<n; i++)
        cin >> a[i];

    double l = 0, r=9e18;
    double ans = -1;
    for (int i=0; i<100; i++){
        double m = (l+r)/2;
        if (check(a,n,m,k)){
            ans = m;
            l = m;
        }
        else 
            r=m;
    }
    cout << fixed << setprecision(6) << ans;
}