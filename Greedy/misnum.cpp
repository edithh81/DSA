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
ll a,b;
void solve(string x){
    for (char &a:x){
        if (a == '5')
            a='6';
    }
    int idx = x.find(' ');
    a = stoll(x.substr(0,idx));
    b = stoll(x.substr(idx+1));
    cout << a+b << ' ';
    for (char &a:x){
        if (a == '6')
            a='5';
    }
    a = stoll(x.substr(0,idx));
    b = stoll(x.substr(idx+1));
    cout << a+b;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    string s;
    getline(cin,s);
    solve(s);
    return 0;
}