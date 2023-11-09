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
vector<ll> v;
void solve(){
    int T; cin >> T;
    queue<ll> q;
    q.push(8);
    for (int i=0; i<100; i++){
        v.push_back(q.front());
        q.push(1ll*q.front()*10);
        q.push(1ll*q.front()*10+8);
        q.pop();
    }
    while (T--){
        int x;
        cin >> x;
        for (ll tmp : v){
            if (tmp % x == 0){
                cout << tmp <<endl;
                break;
            }
        }
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    solve();
    return 0;
}