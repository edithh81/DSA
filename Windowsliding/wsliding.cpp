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
    int a[1005];
    for (int &x:a) cin >> x;
    ll sum = 0;
    for (int i=0; i<k ;i++)
        sum+=a[i];
    ll res = sum, idx=0;
    for (int i=k; i<n; i++){
        sum=sum-a[i-k]+a[i];
        if (sum>res){
            res=sum;
            idx=i-k+1;
        }
    }
    cout << res <<endl;
    for (int i=0; i<k ;i++)
        cout << a[i+idx] << ' ';
    return 0;
}