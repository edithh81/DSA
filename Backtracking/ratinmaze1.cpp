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
bool flag = false;
vector<string> res;
void bt(int i, int j, string ans){
    for (int k=0; k<2; k++){
        int i1 = i + dx[k], j1 = j + dy[k];
        if (i1 == n && j1 == n && a[i1][j1]){
            flag = true;
            if (!k)
                res.push_back(ans+"D");
            else 
                res.push_back(ans+"R");
        }
        else if (i1>=1 && i1<=n && j1>=1 && j1<=n && a[i1][j1]){
            if (!k)
                bt(i1, j1, ans+"D");
            else
                bt(i1, j1, ans+"R");
        }
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            cin >> a[i][j];

    bt(1,1,"");

    if (flag){
        for (string x:res)
            cout << x << endl;
    }
    else
        cout << -1;
    return 0;
}
