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
    for (int i=0; i<n; i++){
        if (cnt <=a[i])
            ++cnt;
    }
    cout << cnt;
    return 0;
}