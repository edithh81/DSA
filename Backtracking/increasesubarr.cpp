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
int n,s,a[1005], X[1005];
vector<string> res;
void bt(int i, int pos){
    for (int j=pos; j<=n; j++){
        if (a[j] > X[i-1]){
            X[i] = a[j];
            if (i >= 2){
                string tmp = "";
                for (int k = 1; k<=i; k++){
                    tmp+=to_string(X[k]);
                    tmp+=' ';
                }
                res.push_back(tmp);
            }
            bt(i+1, j+1);
        }
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    bt(1,1);
    sort(res.begin(), res.end());
    for (string tmp : res)
        cout << tmp << endl;
    return 0;
}
