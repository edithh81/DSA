#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m;
    cin >> n >> m;
    int a[10005],b[10005];
    for (int &x:a) cin >> x;
    for (int &x:b) cin >> x;
    int i=0,j=0;
    while (i<n&&j<m){
        if (a[i]<b[j])
            cout << a[i++] << ' ';
        else cout << b[j++] << ' ';
    }
    while (i<n){
        cout << a[i++] << ' ';
    }
    while (j<m){
        cout << b[j++] << ' ';
    }
    return 0;
}
