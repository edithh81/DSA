#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int a[1005];
    for (int &x:a)
        cin >> x;
    sort(a,a+n);
    int cnt = 0;
    int l = a[0], r = a[n-1];
    for (int i = l; i<=r; i++){
        if (!binary_search(a,a+n,i))
            ++cnt;
    }
    cout << cnt;
    return 0;
}
