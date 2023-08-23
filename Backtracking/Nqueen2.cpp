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
int n = 8, a[205];
bool col[205], d1[205], d2[205];
int res = INT_MIN;
int mtr[205][205];
void pre(){
    for (int i=0; i<205; i++)
        col[i]=d1[i]=d2[i]=true;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            cin >> mtr[i][j];
}
void bt(int i, int sum){
    for (int j=1; j<=n; j++){
        if (col[j] && d1[i-j+n] && d2[i+j-1]){
            a[i]=j;
            col[j]=d1[i-j+n]=d2[i+j-1]=false;
            if (i==n)
                res = max(res,sum+ mtr[i][a[i]]);
            else    
                bt(i+1, sum + mtr[i][a[i]]);
            col[j]=d1[i-j+n]=d2[i+j-1]=true;
        }
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    pre();
    bt(1,0);
    cout << res;
    return 0;
}
