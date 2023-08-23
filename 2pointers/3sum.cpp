#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
bool check(int a[], int n, int target){
    for (int i=0; i<n; i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            ll sum = a[i]+a[j]+a[k];
            if (sum==target)
                return true;
            else if (sum>target) --k;
            else ++j;
        }
    }
    return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, target;
    cin >> n >> target;
    int a[1005];
    for (int &x:a) cin >> x;
    sort(a,a+n);
    if (check(a,n,target)) cout << "YES";
    else cout << "NO";
    return 0;
}
