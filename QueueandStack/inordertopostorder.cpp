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
int getPrecedence(const char &c){
    switch(c){
        case '+': case '-': return 1;
        case '*': case '/' : return 2;
        default: return -1; 
    }
}
bool isChar(const char &x){
    return x>='a' && x<='z' || x>='A' && x<='Z';
}
void solve(){
    getline(cin,s);
    string ans = "";
    stack<char> res;
    for (int i=0; i<(int)s.size(); i++){
        if (s[i] == '(')    res.push(s[i]);
        else if (s[i] == ')'){
            while (!res.empty() && res.top() != '('){
                ans += res.top();
                res.pop();
            }
            res.pop();
        }
        else if (isChar(s[i]))  ans+=s[i];
        else{
            while (!res.empty() && getPrecedence(s[i]) <= getPrecedence(res.top())){
                ans+=res.top();
                res.pop();
            }
            res.push(s[i]);
        }
    }  
    while (!res.empty()){
        ans+=res.top();
        res.pop();
    }
    cout << ans;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    solve();
    return 0;
}