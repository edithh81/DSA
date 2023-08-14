#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,l;
    cin >> n >> l;
    int a[10005];
    for (int &x:a)
        cin >> x;
    sort(a,a+n);
    double res = INT_MIN;
    
    for (int i=1; i<n; i++)
            res = max(res,1.0*(a[i]-a[i-1])/2);
    
    res = max(max(1.0*a[0],res), 1.0*(l-a[n-1]));
    cout << fixed << setprecision(10) <<res;
    return 0;
}