#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin >> n >> k;
    ll a[1005];
    for (ll &x:a) cin >> x;
    sort (a,a+n);
    int j=0;
    int ans = -1;
    multiset<ll> se;
    for (int i=0; i<n; i++){
        se.insert(a[i]);
        while(*se.rbegin() - *se.begin() > k){
            se.erase(se.begin());
            j++;
        }
        ans = max(ans,i-j+1);
    }
    cout << ans;
    return 0;
}
