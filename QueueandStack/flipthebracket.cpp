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
bool isValidParentheses (const string &s){
    stack<char> st;
    for (int i=0; i<(int)s.size(); i++){
        if (s[i] == '(')
            st.push(s[i]);
        else{
            if (st.empty()) return false;
            st.pop();
        }
    }
    return st.empty();
}
int minFlip(const string &s){
    int open = 0, close = 0;
    for (char c:s){
        if (c == '(')   ++open;
        else{
            if (open) --open;
            else ++close;
        }
    }
    return (open+1)/2 + (close+1)/2;
}
void solve(){
    string s;
    getline(cin, s);
    if (isValidParentheses(s)){cout << 0; return;}
    cout << minFlip(s);
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    solve();
    return 0;
}