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
int n;
string phone;
map<int,string> keys;
void pre(){
    keys[2]="abc";
    keys[3]="def";
    keys[4]="ghi";
    keys[5]="jkl";
    keys[6]="mno";
    keys[7]="pqrs";
    keys[8]="tuv";
    keys[9]="wxyz";
}
char X[1005];
void bt(int i){
    int t = phone[i]-'0';
    for (char j: keys[t]){
        X[i]=j;
        if (i == n-1){
            for (int k = 0; k<n; k++)
                cout << X[k];
            cout << ' ';
        }
        else bt(i+1);
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> phone;
    sort(phone.begin(),phone.end());
    n = phone.length();
    pre();
    bt(0);
    return 0;
}
