#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int a[10005];
    for (int &x:a) cin >> x;
    ll sum=0;
    map<ll,int> mp;
    mp[0]=-1;
    int ans = -1, idx=-1;
    for (int i=0; i<n; i++){
        sum+=a[i];
        if(mp.find(sum)!=mp.end()){
            int cur = i-mp[sum];
            if (cur>ans){
                idx = i;
                ans = cur;
            }
        }
        else 
            mp[sum]=i;
    }
    if (ans==-1) cout <<"NOT FOUND";
    else 
        for (int i=idx-ans+1; i<=idx; i++)
            cout << a[i] << ' ';
    return 0;
}
