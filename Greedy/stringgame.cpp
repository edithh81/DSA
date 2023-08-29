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
string s;
map<char,int> fre;
void solve(){
    for (char x:s){
        fre[x]++;
    }
    int res=0;
    for (auto it : fre){
        if (it.second & 1)
            res++;
    }
    if (res == 0){
        cout << 2;
        return;
    }
    else{
        --res;
        if (res % 2 == 0)
            cout << 1;
        else
            cout << 2;
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> s;
    solve();
    return 0;
}