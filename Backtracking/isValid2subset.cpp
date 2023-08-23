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
bool flag = false;
vector<string> res;
void Try(int i, int sum){
    if (flag)
        return;
    for (int j=i; j<=n; j++){
        if (sum + a[j] <= s){
            if (sum + a[j] == s){
                flag = true;
                return;
            }
            else Try(i+1, sum+a[j]);
        }
        else break;
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    int sum = accumulate(a+1, a+1+n, 0);
    if (sum & 1)
        cout << 0;
    else{
        s = sum / 2;
        Try(1,0);
        if (flag)
            cout << 1;
        else 
            cout << 0;
    }
    return 0;
}
