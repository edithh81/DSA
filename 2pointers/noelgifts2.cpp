#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,s;
    cin >> n >> s;
    int a[10005];
    for (int &x:a) cin >>x;
    int count = 1e9;
    int l=0,r=0;
    ll sum = 0;
    while (l<=r&&r<n){
        sum+=a[r];
        while(sum>=s){
            count=min(count,r-l+1);
            sum-=a[l++];
        }
        r++;
    }
    if (count == 1e9) cout << -1;
    else cout << count;
    return 0;
}
