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
int n,k, a[1005];
int s;
bool used[1005];
void pre(){
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        used[i]=false;
    }
    s = accumulate(a+1, a+1+n, 0);
}
bool flag = false;
int pos[1005];
void bt(int c, int i, int el){
    for (int j=i; j<=n; j++){
        if (!used[j]){
            used[j]=true;
            pos[el]=j;
            int sum = 0;
            for (int k=1; k<=el; k++)
                sum+=a[pos[k]];
            if (sum==s){
                ++c;
                if (c==k-1){
                    flag = true;
                    return;
                }
                else
                    bt(c,1,1);
            }
            else{
                bt(c,j+1,el+1);
                used[j]=false;
            }
        }
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    pre();
    if (s % k == 0){
        s/=k;
        bt(0,1,0);
        if (flag)
            cout << 1;
        else
            cout << 0;
    }
    else
        cout << 0;
    return 0;
}
