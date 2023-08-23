#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
bool check(int a[], int n, int target){
    for (int i=0; i<n-2; i++){
        for (int j=i+1; j<n-1; j++){
            int k=j+1, l=n-1;
            while(k<l){
                ll sum = a[i]+a[j]+a[k]+a[l];
                if (sum==target) return true;
                else if (sum>target) --l;
                else ++k;
            }
        }
    }
    return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, target;
    cin >> n >> target;
    int a[10005];
    for (int &x:a) cin >>x;
    sort(a,a+n);
    if(check(a,n,target)) cout << "YES";
    else cout << "NO";
    return 0;
}
