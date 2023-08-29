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
int t,n;
void solve(){

        cin >> n; // n = 5a+3b;
        for (int i=n/3; i>-1; i--){
            int tmp = n - i*3;
            if (tmp % 5 == 0){
                for (int j=0; j< 3*i; j++)  cout << 5;
                for (int j=0; j<tmp; j++)   cout << 3;
                cout << endl;
                return;
            }
        }
    
    cout << -1 << endl;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> t;
    while(t--)
        solve();
    return 0;
}