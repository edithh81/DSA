#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
using ll=long long;
bool check(ll a[], ll n){
    ll sum=0;
    ll max_len=0;
    map<ll,ll> m;
    for (int i=0; i<n; i++){
       sum+=a[i];
        if(sum==0)
            max_len=i+1;
        else if (m.find(sum)!=m.end())
            max_len=max(max_len, i-m[sum]);
        else m[sum]=i;
    }
    return max_len!=0;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll n;
    cin >> n;
    ll a[1005];
    for (int i=0; i<n; i++)
        cin >>a[i];
    if (check(a,n)) cout << 1;
    else cout << -1;
}
