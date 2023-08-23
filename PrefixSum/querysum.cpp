#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin >> n >> q;
    int a[10005];
    ll F[10005];
    for (int i=0; i<n; i++){
        cin >> a[i];
        if (i==0)
            F[i]=a[i];
        else 
            F[i]=F[i-1]+a[i];
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        if (l==0) cout << F[r] << endl;
        else cout << F[r]-F[l-1] << endl;
    }
    return 0;
}
