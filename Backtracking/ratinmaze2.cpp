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
const int dx[4] = {0, 0,-1,1};
const int dy[4] = {-1, 1,0,0};
int n, a[1005][1005];
bool used[1005][1005];
void pre(){
    cin >> n;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            cin >> a[i][j];
}
bool flag = false;
vector<string> res;
void bt(int i, int j, string ans){
    a[i][j]=0;
    for (int k=0; k<4; k++){
        int i1 = i + dx[k], j1 = j + dy[k];
        if (i1 == n && j1 == n && a[i1][j1]){
            flag = true;
            if (k==0)
                res.push_back(ans+"L");
            else if (k==1)
                res.push_back(ans+"R");
            else if (k==2)
                res.push_back(ans+"U");
            else 
                res.push_back(ans+"D");
        }
        else if (i1>=1 && i1<=n && j1>=1 && j1<=n && a[i1][j1] ){
            if (k==0)
                bt(i1,j1,ans+"L");
            else if (k==1)
                bt(i1,j1,ans+"R");
            else if (k==2)
                bt(i1,j1,ans+"U");
            else 
                bt(i1,j1,ans+"D");
            a[i1][j1]=1;
        }
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    pre();
    bt(1,1,"");
    if (flag){
        sort(res.begin(), res.end());
        for (string x:res)
            cout << x << endl;
    }
    else
        cout << -1;
    return 0;
}
