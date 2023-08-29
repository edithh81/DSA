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
int T,k;
string s;
void solve(){
    while (T--){
        cin >> k >> s;
        map<char,int> m;
        for (char x:s)
            m[x]++;
        priority_queue<ll> pq;
        ll res = 0;
        for (auto it:m)
            pq.push(it.second);
        while(k>0){
            ll tmp = pq.top(); pq.pop();
            --tmp; --k;
            if (tmp>0)
                pq.push(tmp);
        }
        while (!pq.empty()){
            res += pq.top()*pq.top();
            pq.pop();
        }
        cout << res << endl;
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    solve();
    return 0;
}