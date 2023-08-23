#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, m, k;
    cin >> n >> m >> k;
    int a[10005];
    for (int &x:a) cin >> x;
    int D[10005+1]={0};
    for (int i=0; i<n; i++){
        if (i==0)
            D[i]=a[i];
        else 
            D[i]=a[i]-a[i-1];
    }
    int l[10005],r[10005];
    int d[1005];
    int j=0;
    while (m--){
        cin >> l[j] >> r[j] >> d[j];
        --l[j];
        --r[j];
        // D[l[j]]+=d[j];
        // D[r[j]+1]-=d[j];
        j++;
    }
    while(k--){
        int x,y;
        cin >> x >> y;
        --x;--y;
        for (int i=x; i<=y; i++){
            D[l[i]]+=d[i];
            D[r[i]+1]-=d[i];
        }
    }
    ll sum=0;
    for (int i=0; i<n; i++){
        sum+=D[i];
        cout << sum <<' ';
    }
    return 0;
}
