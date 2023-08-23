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
    int a[1005],b[10005];
    for (int &x:a) cin >>x;
    for (int &x:b) cin >> x;
    int i=0,j=0;
    while (i<n&&j<m){
        if (a[i]<b[j])
            i++;
        else {
            cout << i << ' ';
            ++j;
        }
    }
    while (j<m){
        cout << n <<' ';
        j++;
    }
    return 0;
}
