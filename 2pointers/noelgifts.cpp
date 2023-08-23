#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,s;
    cin >> n >> s;
    int a[1005];
    for (int &x:a) cin >> x;
    int l=0,r=0;
    int count = 0;
    int sum = 0;
    while (l<=r&&r<n){
        sum+=a[r];
        while(sum>s){
            sum-=a[l++];
            count=max(count,r-l+1);
        }
        count=max(count,r-l+1);
        r++;
    }
    cout << count;
    return 0;
}
