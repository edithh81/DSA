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
char a[6]={'(',')','[',']','{','}'};
vector<char> res;
bool check(vector<char> a){
    stack<char> tmp;
    for (int i=0; i<a.size(); i++){
        if (a[i]=='('||a[i]=='['||a[i]=='{')
            tmp.push(a[i]);
        else{
            if (tmp.empty())
                return false;
            if (a[i]==')' && tmp.top() !='('||a[i]=='}' && tmp.top() !='{'||a[i]==']' && tmp.top() !='[')
                return false;
            tmp.pop();
        }
    }
    return tmp.empty();   
}
void bt(int i){
    if (i==n){
        if (check(res)){
            for (char x:res)
                cout << x;
            cout << ' ';
        }
        return;
    }
    for (int j=0; j<6; j++){
        res.push_back(a[j]);
        bt(i+1);
        res.pop_back();
    }
    return;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    if (n&1)
        cout << "NOT FOUND";
    else
        bt(0);
    return 0;
}
