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
const int dx[2] = {1, 0};
const int dy[2] = {0, 1};
string s;
vector<string> res;
int n;
bool isValid(string x){
    string rx = x;
    reverse(rx.begin(), rx.end());
    return !x.empty() && rx == x;
}
void solve(int i, string cur){
    if (i == n){
        string check = "";
        for (string x : res) check+=x;
        if (check == s){
            for (string x : res)
                cout << x << ' ';
            cout << endl;
        }
        return;
    }
    if (isValid(cur)){
        res.push_back(cur);
        string new_cur="";
        solve(i+1, new_cur + s[i+1]);
        res.pop_back();
    }
    solve(i+1, cur + s[i+1]);
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> s;
    n = s.length();
    string tmp = "";
    tmp+=s[0];
    solve(0, tmp);
    return 0;
}
