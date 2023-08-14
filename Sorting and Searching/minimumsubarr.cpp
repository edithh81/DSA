#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin >> a[i];
    ll sum = 0;
    int j=0;
    int min_len=1e9;
    for (int i=0; i<n; i++){
        sum+=a[i];
        while(sum>=k&&j<=i){
            if (sum==k){
                min_len=min(min_len,i-j+1);
            }
            sum-=a[j++];
        }
    }
    if (min_len==1e9) cout << -1;
    else cout << min_len;
    return 0;
}
