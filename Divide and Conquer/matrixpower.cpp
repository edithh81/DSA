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
ll N,k;
struct Matrix{
    ll n, a[10][10];
    Matrix(){
        n=N;
    };
};
Matrix operator * (Matrix A, Matrix B){
    Matrix res;
    for (int i=0; i<A.n; i++){
        for (int j=0; j<B.n; j++){
            res.a[i][j]=0;
            for (int k=0; k<B.n; k++){
                res.a[i][j]+=(A.a[i][k]%MOD)*(B.a[k][j]%MOD);
                res.a[i][j]%=MOD;
            }
        }
    }
    return res;
}
Matrix bPow(Matrix A, ll n){
    if (n==1)
        return A;
    Matrix X = bPow(A, n/2);
    if (n&1)
        return A*X*X;
    return X*X;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> N >> k;
    Matrix ans;
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
           cin >> ans.a[i][j];

    
    Matrix res = bPow(ans, k);
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++)
            cout << res.a[i][j] << ' ';
        cout << endl;
    }
}