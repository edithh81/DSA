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
int n,k, idx[1005];
string s;
void bt(int i){
    for (int j=idx[i-1]; j<=n; j++){
        idx[i]=j;
        if (i==k){
            for (int l=1; l<=k; l++)
                cout << s[idx[l]];
            cout << endl;
        }
        else
            bt(i+1);
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> k >> s;
    sort(s.begin(),s.end());
    s = "0" + s;
    idx[0]=1;
    bt(1);
    return 0;
}
