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
int a[1005];
int X[1005];
bool used[10005];
void pre(){
    cin >> n;
    for (int i=1; i<=n; i++){
        a[i]=i;
        used[a[i]]=false;
    }
}
bool check(){
    for (int i=2; i<=n; i++)
        if (abs(X[i]-X[i-1])==1)
            return false;
    return true;
}
void bt(int i){
    for (int j=1; j<=n; j++){
        if (!used[j]){
            X[i]=j;
            used[j]=true;
            if (i==n && check()){
                for (int k=1; k<=n; k++)
                    cout << X[k];
                cout << endl;
            }   
            else
                bt(i+1);
            used[j]=false;
        }
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    pre();
    bt(1);
    return 0;
}