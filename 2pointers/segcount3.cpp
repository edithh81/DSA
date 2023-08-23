#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
using ll = long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin >> n >> k;
    int a[1005];
    for (int &x:a) cin >> x;
    map<int,int> m;
    int l=0;
    ll cnt = 0;
    ll ans=0;
    for (int r=0; r<n; r++){
        m[a[r]]++;
        if (m[a[r]]==1) ++cnt;
        while(cnt>k){
            if(m[a[l]]==1) 
                --cnt;
            m[a[l]]--;
            ++l;
        }
        ans+=r-l+1;
    }
    cout << ans;
    return 0;
}
