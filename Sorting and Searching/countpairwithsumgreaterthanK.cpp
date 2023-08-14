#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin >> n >> k;
    int a[10005];
    for (int &x:a)
        cin >> x;
    sort(a,a+n);
    ll res = 0;
    for (int i=0; i<n; i++){
        auto it = upper_bound(a+i+1, a+n, k-a[i]);
        res+=a+n-it;
    }
    cout << res;
    return 0;
}
