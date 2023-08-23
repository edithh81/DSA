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
    cin >>n >> s;
    int a[1005];
    for (int &x:a) cin >> x;
    ll sum=0;
    ll cnt=0;
    int l=0;
    for (int r=0; r<n; r++){
        sum+=a[r];
        while(sum>=s){
            cnt+=n-r;
            sum-=a[l];
            l++;
        }
    }
    cout << cnt;
    return 0;
}
