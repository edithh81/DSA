#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,k;
    cin >> n >> k;
    int a[10005];
    int cnt=0;
    for (int i=0; i<n; i++){
        cin >> a[i];
        if (a[i]==1)
            ++cnt;
    }
    if (cnt<k){
        cout << "-1";
        return 0;
    }
    int cur=0;
    for (int i=0; i<k; i++)
        cur+=a[i];
    
    int res = cur;
    for (int i=k; i<n; i++){
        cur = cur-a[i-k]+a[i];
        res = max(res, cur);
    }
    cout << k-res;
    return 0;
}
