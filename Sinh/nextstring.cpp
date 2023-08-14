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
int n,k;
int a[1005];
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    string s;
    cin >> s;
    n = s.length()-1;
    int j = n-1;
    while (j>-1 && s[j]>=s[j+1])
        --j;
    if (j==-1){
        cout << "NOT EXIST";
        return 0;
    }
    else{
    int k = n;
    while (s[j]>=s[k])
        --k;
    swap(s[j],s[k]);
    sort(s.begin()+j+1,s.end());
    cout << s;
    }
    return 0;
}