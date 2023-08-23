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
// backtracking: vet can, liet ke, dem cau hinh
int X[100],n;
// sinh cac hoan vi lap
void backtrack1(int i){
    // thu xem X[i] co the nhan nhung gia tri nao
    for (int j = 1; j<=n; j++){
        X[i]=j;
        if (i==n){
            for (int k=1; k<=n; k++)
                cout << X[k];
            cout << endl;
        }
        else{
            backtrack1(i+1);
        }
    }
}
// sinh xau nhi phan
void backtrack2(int i){
    for (int j=0; j<=1; j++){
        X[i]=j;
        if (i==n){
            for (int k=1; k<=n; k++)
                cout << X[k];
            cout << endl;
        }
        else
            backtrack2(i+1);
    }
}
// sinh hoan vi
bool used[105];
void backtrack3(int i){
    for (int j=1; j<=n; j++){
        if (!used[j]){
            X[i]=j;
            used[j]=true;
            if (i==n){
                for (int k=1; k<=n; k++)
                    cout << X[k];
                cout << endl;
            }
            else
                backtrack3(i+1);
            // sau khi nhay tu backtrack ra danh dau lai chua dung
            used[j]=false;
        }
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    backtrack3(1);
    return 0;
}