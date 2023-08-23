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
string s,tmp;
bool isChar(char c){
    return (c>='A' && c <='Z') || (c>='a' && c<='z');
}
set<string> res;
void bt(int i, string s){
    int n = s.length();
    for (int j=i; j<n; j++){
        if (isChar(s[j])){
            char c = s[j];
            if (isupper(s[j]))
                s[j]=tolower(s[j]);
            else
                s[j]=toupper(s[j]);
            res.insert(s);
            bt(j+1,s);
            s[j]=c;
        }
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> s;
    tmp = s;
    res.insert(s);
    bt(0,s);
    
    for (string x:res)
        cout << x << endl;
    return 0;
}
