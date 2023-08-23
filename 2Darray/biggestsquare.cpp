#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
ll prefix[1001][1001];
int a[1001][1001];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    for (int i=1; i<=n; i++)
        for (int j=1;j<=n; j++)
            cin >> a[i][j];
    for (int i=1; i<=n; i++)
        for (int j=1;j<=n; j++)
            prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+a[i][j];
    ll max_sum = -1e9;
    for (int i=1; i<=n; i++){
        if(i+2>n) 
            break;
        for (int j=1; j<=n; j++){
            if(j+2>n)
                break;
            max_sum=max(max_sum, prefix[i+2][j+2]-prefix[i-1][j+2]-prefix[i+2][j-1]+prefix[i-1][j-1]);
        }
    }
    cout << max_sum;
    return 0;
}
