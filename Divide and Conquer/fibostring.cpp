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
ll n,k;
ll fibo[94];
void init(){
    fibo[1]=1;
    fibo[2]=1;
    for (int i=3; i<=92; i++)
        fibo[i]=fibo[i-2]+fibo[i-1];
}
char findW(ll n, ll k){
    if (n==1)
        return 'A';
    if (n==2)
        return 'B';
    if (k <= fibo[n-2])
        return findW(n-2, k);
    return findW(n-1, k-fibo[n-2]);
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> k;
    init();
    char res = findW(n,k);
    cout << res;
    return 0;
}