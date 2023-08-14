#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m;
    cin >> n >> m;
    if (m>n) cout << "NO";
    else{
    int a[1005],b[1005];
    for (int &x:a) cin >> x;
    for (int &x:b) cin >> x;
    int cnt=0;
    int i=0;
    for (int x:a){
        if (x==b[i]){
            ++cnt;
            ++i;
        }
        if (cnt==m) break;
    }
    if(cnt==m) cout << "YES";
        else cout << "NO";
    }
    return 0;
}
