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
int a[MAX], b[MAX];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    int n,m,k;
    cin >> n >> m >> k;
    for (int &x:a)
        cin >> x;
    for (int &x:b)
        cin >> x;
    int cnt = 0;
    sort(a,a+n);
    sort(b,b+m);
    int i=0, j=0;
    while (i<n&&j<m){
        if(abs(a[i]-b[j])<=k){
            ++cnt;
            ++i; ++j;
        }
        else if (a[i]-b[j]>k)
            ++j;
        else 
            ++i;
    }
    cout << cnt;
    return 0;
}
