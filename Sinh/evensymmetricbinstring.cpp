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
int n, a[1005], final = 0;
void pre(int size){
    for (int i=1; i<=size; i++)
        a[i]=0;
}
void sinh(int size){
    int i = size;
    while (i>=1 && a[i]==1){
        a[i]=0;
        --i;
    }
    if (i==0)
        final = 1; 
    else 
        a[i]=1; 
    
}
bool isValid(int size){
    int i = 1, j = size;
    while(i<=j){
        if (a[i]!=a[j])
            return false;
        ++i;
        --j;
    }
    return true;
}
set<string> se;
void buildup(){
    int size = 15;
    for (int k=1; k<=15; k++){
        pre(k);
        while(!final){
            string tmp ="";
            for (int i=1; i<=k; i++)
                tmp+=to_string(a[i]);
            string tmp1=tmp;
            reverse(tmp1.begin(),tmp1.end());
            se.insert(tmp+tmp1);
        sinh(k);
        }
        final = 0;
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    buildup();
    cin >> n;
    for (string x:se){
        if (x.size()<=n)
            cout << x << endl;
    }
    return 0;
}