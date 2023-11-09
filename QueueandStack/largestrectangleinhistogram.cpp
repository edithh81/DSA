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
int n, a[MAX], l[MAX], r[MAX];
void right(){
    stack<int> st;
    st.push(0);
    for (int i=1; i<n; i++){
        while (!st.empty() && a[i] < a[st.top()]){
            r[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()){
        r[st.top()] = n;
        st.pop();
    }
}
void left(){
    stack<int> st;
    st.push(n-1);
    for (int i=n-2; i>-1; i--){
        while (!st.empty() && a[i] < a[st.top()]){
            l[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()){
        l[st.top()] = -1;
        st.pop();
    }
}
void solve(){
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    right(); left();
    ll res = 0;
    for (int i=0; i<n; i++){
        ll temp = 1ll*a[i] * (r[i] - l[i] -1 );
        res = max(res, temp);
    }
    cout << res << endl;

}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    solve();
    return 0;
}