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
int n;
int mark[MAX]={0};
struct job{
    int id, deadline, profit;
};
vector<job> v;
bool cmp(job a, job b){
    return a.profit>b.profit;
}
void solve(){
    ll res = 0;
    for (int i=0; i<n; i++){
        while( mark[v[i].deadline] && v[i].deadline>0)
            --v[i].deadline;
        if (!mark[v[i].deadline] && v[i].deadline){
            res+=v[i].profit;
            mark[v[i].deadline]=1;
        }
    }
    cout << res;
}

int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    int tmp = n;
    while (tmp--){
        int x,y,z;
        cin >> x >> y >> z;
        v.push_back({x,y,z});
    }
    sort(all(v), cmp);
    solve();
    return 0;
}