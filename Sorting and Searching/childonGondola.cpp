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
int a[MAX];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,x;
    cin >> n >> x;
    for (int &y:a)
        cin >> y;
    sort(a,a+n);
    int i=0, j=n-1;
    ll res = 0;
    while (i<=j){
        if (a[i]+a[j]<=x){
            ++res;
            ++i;
            --j;
        }
        else if (a[j]<=x){
            ++res; 
            --j;
        }
    }
    cout << res;
    return 0;
}