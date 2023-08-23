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
const int dx[2] = {1, 0};
const int dy[2] = {0, 1};
int n, a[1005][1005];
int x[1005];
bool visited[1005];
int res = INT_MAX, cmin = INT_MAX;
void pre(){
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> a[i][j];
            cmin = min(a[i][j],cmin);
        }
    }
    for (int i=0; i<1005; i++)
        visited[i]=false;
}
void bt(int i, int cost){
    for (int j=1; j<=n; j++){
        if (!visited[j]){
            x[i]=j;
            visited[j]=true;
            cost+=a[x[i-1]][x[i]];
            if (i == n)
                res = min(res, cost+a[x[n]][1]);
            else if (cost + (n-i+1)*cmin < res)
                bt(i+1,cost);
            cost-=a[x[i-1]][x[i]];
            visited[j]=false;
        }
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    pre();
    x[1]=1;
    visited[1]=true;
    bt(2,0);
    cout << res;
    return 0;
}
