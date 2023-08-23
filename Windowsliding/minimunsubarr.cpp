#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k;
    cin >> n >>k;
    int a[10005];
    for (int &x:a) cin >> x;
    int j=0, idx=1e9, ans = 1e9;
    ll cur_sum=0;
    for (int i=0; i<n; i++){
        cur_sum+=a[i];
        while(cur_sum>=k){
            if (i-j+1<ans){
                idx=i;
                ans = i-j+1;
            }
            cur_sum-=a[j++];
        }
    }
    if (ans==1e9) cout <<-1;
    else 
        for (int i=idx-ans+1; i<=idx; i++)
            cout << a[i] << ' ';
    return 0;
}
