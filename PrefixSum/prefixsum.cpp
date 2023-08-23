#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    int a[10005];
    ll F[10005];
    for (int i=0; i<n; i++){
        cin >> a[i];
        if (i==0) 
            F[i]=a[i];
        else 
            F[i]=F[i-1]+a[i];
    }
    for (ll x : F)
        cout << x << ' ';
    return 0;
}
