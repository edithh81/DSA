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
const int dx[4] = {-1,1,0,0};
const int dy[4] = {0,0,-1,1};
int n,m;
char a[105][105];
bool used[105][105];
bool found = false;
string s;
int len;
void pre(){
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin >> a[i][j];
            used[i][j]=false;
        }
    }
    cin >> s;
    len = s.length();
}
bool isValid(int i, int j){
    return i>=1 && i<=n && j>=1 && j<=m && !used[i][j];
}
void bt(int i, int j, int pos){
    if (found)
        return;
    if (pos==len){
        found = true;
        return;
    }
    for (int k=0; k<4; k++){
        int i1 = i+dx[k], j1=j+dy[k];
        if (isValid(i1,j1)){
            used[i1][j1]=true;
            if (a[i1][j1] == s[pos])
                bt(i1,j1,pos+1);
            
            used[i1][j1]=false;
        }
    }
    
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    pre();
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if (a[i][j]==s[0]){
                a[i][j]=1;
                bt(i,j,1);
                a[i][j]=0;
            }
        }   
    }
    
    if (found)
        cout << "YES";
    else    
        cout << "NO";
    return 0;
}
