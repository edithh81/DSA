#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    int n, k;
    cin >> n >> k;
    int a[1005];
    for (int &x:a) cin >> x;
     ll sum =0;
    map<ll,int> mp;
    mp[0]=-1;
    int ans=-1;
    for (int i=0; i<n; i++){
        sum=(sum+a[i])%k;
        if (sum<0) sum+=k;
        if (mp.find(sum)!=mp.end())
            ans=max(ans, i-mp[sum]);
        else mp[sum]=i;
    }
    cout << ans;
    return 0;
}