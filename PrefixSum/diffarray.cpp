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
    int a[1005],D[10005+1];
    for (int i=0; i<n; i++){
        cin >> a[i];
        if (i==0) cout << a[i] << ' ';
        else cout << a[i]-a[i-1] << ' ';
    }
    return 0;
}
