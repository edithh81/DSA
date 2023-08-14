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
int n, a[1005], final = 0;
void pre(){
    for (int i=1; i<=n; i++)
        a[i]=0;
}
void sinh(){
    int i = n;
    while (i>=1 && a[i]==1){
        a[i]=0;
        --i;
    }
    if (i==0)
        final = 1; 
    else 
        a[i]=1; 
    
}
bool check(){
    stack<int> st;
    for (int i = 1; i<=n; i++){
        if (a[i]==0)
            st.push(a[i]);
        else{
            if (st.empty())
                return false;
            else st.pop();
        }
    }
    return st.empty();
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    pre();
    while(!final){
        if (check()){
            for (int i=1; i<=n; i++){
                if (a[i]==0)
                    cout << '(';
                else 
                    cout << ')';
            }
            cout << endl;
        }
        sinh();
    }
    return 0;
}