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
queue<ll> q;
vector<ll> res;
void init(){
    q.push(6);
    q.push(8);
    while (true){
        ll f = q.front();
        q.pop();
        if (f >= 1e18) break;
        res.push_back(f);
        q.push(f*10+6);
        q.push(f*10+8);
    }
}
void solve(){
    init();
   int T;
   cin >> T;
    while (T--){
        int n;
        cin >> n;
        stack<ll> ans;
        for (int i=0; i<(int)res.size(); i++){
            if (to_string(res[i]).length() <= n)
                ans.push(res[i]);
            else break;
        }
        while (!ans.empty()){cout << ans.top() << ' '; ans.pop();}
        cout << endl;
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    solve();
    return 0;
}