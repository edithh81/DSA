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
int n, a[1005], X[1005];
vector<vector<int>> res;
void bt(int i, int sum, int start){
    for (int j=start; j<=n; j++){
        X[i] = a[j];
        if ((sum + a[j]) & 1 ){
            vector<int> tmp (X+1, X+1+i);
            res.push_back(tmp);
        }
        bt(i+1, sum+a[j], j+1);
    }
}
bool cmp(vector<int> a, vector<int> b){
    for (int i = 0; i<a.size() && i < b.size(); i++)
        if (a[i]!=b[i])
            return a[i] < b[i];
    return a.size() < b.size();
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    bt(1,0,1);
    sort(res.begin(), res.end(), cmp);
    if (res.size()){
        for (auto it : res){
            for (int x : it)
                cout << x << ' ';
            cout << endl;
        }
    }
    else    
        cout << "NOT FOUND";
}


