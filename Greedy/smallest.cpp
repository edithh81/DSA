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
int s,d;
void solve(){
    stack<int> st;
    while(s>0){
        --d;
        if (s>9){
            st.push(9);
            s-=9;
        }
        else{
            st.push(s);
            break;
        }
    }
    if (d<0){
        cout << -1;
        return;
    }
    int tmp = st.top();
    st.pop();
    st.push(tmp-1); // chua ra 1 don vi
    while (d>1){
        st.push(0);
        --d;
    }
    st.push(1);
    while (!st.empty()){
        cout << st.top();
        st.pop();
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> s >> d;
    solve();
    return 0;
}