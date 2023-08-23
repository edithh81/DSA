#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
bool check(int a[], int n, int target){
int l=0,r=n-1;
    ll sum=0;
    while (l<r){
        sum=a[l]+a[r];
        if (sum==target) return true;
        else if (sum>target) --r;
        else ++l;
    }
    return false;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,target;
    cin >> n >> target;
    int a[1005];
    for (int &x:a) cin >> x;
    sort(a,a+n);
    if (check(a,n,target)) cout << "YES";
    else cout << "NO";
    return 0;
}
