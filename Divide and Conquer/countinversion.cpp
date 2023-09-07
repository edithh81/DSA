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
int merge(int a[], int l, int r, int m){
    vector<int> x(a+l, a+m+1);
    vector<int> y(a+m+1, a+r+1);
    int i=0, j=0, cnt = 0;
    while (i<x.size() && j<y.size()){
        if (x[i] <= y[j]){
            a[l++] = x[i];
            ++i;
        }
        else{
            cnt+=x.size()-i;
            a[l++]=y[j++];
        }
    }
    while(i<x.size())
        a[l++]=x[i++];
    while(j<y.size())
        a[l++]=y[j++];
    return cnt;
}
int mergeSort(int a[], int l, int r){
    ll res = 0;
    if (l<r){
        int m = (l+r)/2;
        res+=mergeSort(a,l,m);
        res+=mergeSort(a,m+1,r);
        res+=merge(a,l,r,m);
    }
    return res;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    ll ans = mergeSort(a,0,n-1);
    cout << ans;
    return 0;
}