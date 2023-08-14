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
int n, a[1005], final=0;
void pre(){
    for (int i=1; i<=n; i++)
        a[i]=0;
        a[n]=1;

}
void sinh(){
    int i = n;
    while(i>0 && a[i]==1){
        a[i]=0;
        --i;
    }
    if (i==0)
        final = 1;
    else  
        a[i]=1;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    pre();
    vector<string> v;
    while(!final){
        string tmp = "";
        for (int i=1; i<=n; i++){
            if (a[i]){
                tmp+=to_string(i);
                tmp+=' ';
            }
        }
        v.push_back(tmp);
        sinh();
    }
    sort(v.begin(), v.end());
    for (string x:v)
        cout << x << endl;
    return 0;
}