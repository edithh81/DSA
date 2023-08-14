#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int a[1005];
    for (int &x:a)
        cin >> x;
    sort(a,a+n, greater<int>());
    ll sum = 0;
    for (int i=0; i<n; i++){
        sum+=a[i]-i>0?a[i]-i:0;
    }
    cout << sum;
        
    return 0;
}