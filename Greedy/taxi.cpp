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
int a[MAX];
map<int,int> fre;
void solve(){
    for (int i=0; i<n; i++){
        cin >> a[i];
        fre[a[i]]++;
    }
    ll res = 0;
    while(fre[1] > 0 && fre[3] > 0){
        res++;
        --fre[1]; --fre[3];
    }
    while(fre[1]>1 && fre[2] > 0){
        ++res;
        fre[1]-=2; --fre[2];
    } 
    while (fre[2]>1){
        ++res;
        fre[2]-=2;
    }
    while (fre[1]>0 && fre[2]>0){
        ++res;
        --fre[1];
        --fre[2];
    }
    res+=fre[1]/4;
    if (fre[1] % 4)
        ++res;
    if (fre[2])
        ++res;
    while (fre[3]>0){
        ++res;
        --fre[3];
    }
    res+=fre[4];
    cout << res;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    solve();
    return 0;
}