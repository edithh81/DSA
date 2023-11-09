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
string s;
bool isChar(const char &x){
    return x>='a' && x<='z' || x>='A' && x<='Z';
}
void solve(){
    getline(cin,s);
    stack<string> res;
    for (int i=(int)s.size()-1; i>-1; i--){
        if (isChar(s[i]))   res.push(string(1, s[i]));
        else{
            string operand1 = res.top(); res.pop();
            string operand2 = res.top(); res.pop();
            string formula =  operand1 +operand2+ s[i] ;
            res.push(formula);
        }
    }  
    cout << res.top();
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    solve();
    return 0;
}