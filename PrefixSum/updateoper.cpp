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
    int a[10005], D[10005+1];
    for (int i=0; i<n; i++){
        cin >> a[i];
        if (i==0)
            D[i]=a[i];
        else 
            D[i]=a[i]-a[i-1];
    }
    while (q--){
        int l,r,k;
        cin >> l >> r >> k;
        D[l]+=k;
        D[r+1]-=k;
    }
    ll sum = 0;
    for (int i=0; i<n; i++){
        sum+=D[i];
        cout << sum << ' ';
    }
    return 0;
}
