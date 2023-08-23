#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int n, q; cin >> n >> q;
     int a[10005];
     for(int i = 0; i < n; i++){
          cin >> a[i];
     }
     int d[10005 + 5] = {0};
     while(q--){
          int l, r; cin >> l >> r;
          --l; --r;
          d[l] += 1;
          d[r + 1] -= 1;
     }
     int F[10005];
     F[0] = d[0];
     for(int i = 1; i < n; i++){
          F[i] = F[i - 1] + d[i];
     }
     sort(F, F + n, greater<int>());
     sort(a, a + n, greater<int>());
     ll res = 0;
     for(int i = 0; i < n; i++){
          res += 1ll * a[i] * F[i];
     }
     cout << res << endl;
}