#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int a[10004][10004];
    for (int i=0;i<n; i++)
        for (int j=0; j<n; j++)
            cin >> a[i][j];
    int dp[10005][10005];
    for (int i=0; i<n; i++)
        dp[i][0]=a[i][0];
    for (int j=1; j<n; j++){
        for (int i=0; i<n; i++){
            if (i==0)
                dp[i][j]=a[i][j]+max(dp[i][j-1],dp[i+1][j-1]);
            else if (i==n-1)
                dp[i][j]=a[i][j]+max(dp[i][j-1],dp[i-1][j-1]);
            else
                dp[i][j]=a[i][j]+max({dp[i][j-1],dp[i+1][j-1],dp[i-1][j-1]});
        }
    }
    int max_path=-1e9;
    for (int i=0; i<n; i++)
        max_path=max(max_path, dp[i][n-1]);
    cout << max_path;
    return 0;
}
    
