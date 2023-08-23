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
int n,s,a[1005], X[1005];
vector<vector<int>> res;
void bt(int i, int sum, int start){
    for (int j=start; j<=n; j++){
        if (sum + a[j] <=s){
            X[i]=a[j];
            if (sum + a[j] == s){
                vector<int>tmp(X+1,X+i+1);
                res.push_back(tmp);
            }
            else   
                bt(i+1, sum + a[j], j);
        }
        else 
            break;   
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> s;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    sort(a+1,a+n+1);
    bt(1,0,1);
    cout << res.size() << endl;
    for (auto it : res){
        cout << "{";
        for (int j=0; j<it.size(); j++){
            cout << it[j];
            if (j< it.size()-1)
                cout << ' ';
        }
        cout << "}\n";
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// int n, S, a[1000], X[1000];
// vector<vector<int>> res;

// void nhap(){
//     cin >> n >> S;
//     for(int i = 1; i <= n; i++){
//         cin >> a[i];
//     }
//     sort(a + 1, a + n + 1);
// }

// void Try(int i, int tong, int pos){
//     for(int j = pos; j <= n; j++){
//         X[i] = a[j];
//         tong += X[i];
//         if(tong == S){
//             vector<int> tmp(X + 1, X + i + 1);
//             res.push_back(tmp);
//         }
//         else if(tong < S) Try(i + 1, tong, j);
//         //backtrack
//         tong -= X[i];
//     }   
// }


// int main(){
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
//     nhap();
//     Try(1, 0, 1);
//     cout << res.size() << endl;
//     for(auto  it : res){
//         for(int x : it){
//             cout << x << ' ';
//         }
//         cout << endl;
//     }
// }