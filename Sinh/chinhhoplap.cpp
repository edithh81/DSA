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
int n, k, a[1005], final = 0;
void pre(){
    for (int i=1; i<=k; i++)
        a[i]=1;
}
void sinh(){
    int i = k;
    while(i>0 && a[i]==n)
        --i;
    if (i==0)
        final = 1;
    else{
        a[i]++;
        for (int j = i+1; j<=k; j++)
            a[j]=1;
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> k;
    pre();
    while(!final){
        for (int i = 1; i<=k; i++)
            cout << a[i];
        cout << endl;
        sinh();
    }
    return 0;
}