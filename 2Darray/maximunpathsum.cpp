#include <bits/stdc++.h> 
using namespace std;
using ll = long long;
int n,m;
ll dp[10001][1001];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin >>n >>m;
    int a[10001][10001];
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin >> a[i][j];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (i==0&&j==0)
                dp[0][0]=a[0][0];
            else if (i==0)
                dp[i][j]=dp[i][j-1]+a[i][j];
            else if(j==0)
                dp[i][j]=dp[i-1][j]+a[i][j];
            else 
                dp[i][j]=a[i][j]+max(dp[i-1][j],dp[i][j-1]);
            }
    }
    cout << dp[n-1][m-1];
    
    return 0;
}
