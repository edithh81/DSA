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
int n, a[MAX];
void solve(){
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    vector<int> idx(n);
    stack<int> st;
    st.push(0);
    for (int i=1; i<n; i++){
        while (!st.empty() && a[i] > a[st.top()]){
            idx[st.top()] = a[i];
            st.pop();
        }
        st.push(i);
    }
    vector<int> ans(n);
    while (!st.empty()){
        idx[st.top()] = -1;
        st.pop();
    }
    for (int x : idx) cout << x << ' ';
    st.push(0);
    for (int i=1; i<n; i++){
        while (!st.empty()){
            if (idx[st.top()] == -1){
                ans[i] = -1;
                st.pop();
            }
            else if (a[i] < a[idx[st.top()]]){
                ans[i] = a[idx[st.top()]];
                st.pop();
            }
        }
        st.push(i);
    }
    while (!st.empty()){
        ans[st.top()] = -1;
        st.pop();
    }
    for (int x : ans)   cout << x << ' ';
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    solve();
    return 0;
}