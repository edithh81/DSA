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
    int a[1005];
    for (int &x:a) cin >> x;
    ll sum = 0;
    int l=0,r=0;
    int cnt=0;
    while (l<=r&&r<n){
        sum+=a[r];
        while(sum>s){
            sum-=a[l];
            l++;
        }
        cnt+=r-l+1;
        r++;
    }
    cout << cnt;
    return 0;
}
