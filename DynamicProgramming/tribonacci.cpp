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
ll F[MAX];
void init(){
    F[0]=0; F[1]=0;
    F[2]=1;
    for (int i=3; i<MAX; i++)
        F[i]=((F[i-1]%MOD)+(F[i-2]%MOD)+(F[i-3]%MOD))%MOD;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    init();
    cin >> T;
    while (T--){
        cin >> n;
        cout << F[n] << endl;
    }
    return 0;
}