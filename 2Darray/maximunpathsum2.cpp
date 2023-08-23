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
    int a[10005][10005];
    for (int i=0;i<n; i++)
        for (int j=0; j<n; j++)
            cin >> a[i][j];
    int dp[10005][10005];
    int max_path=-1e9;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==0){
                dp[i][j]=a[i][j];
                max_path=max(dp[i][j],max_path);
            }
            else if (j==0){
                dp[i][j]=a[i][j]+max(dp[i-1][j],dp[i-1][j+1]);
                 max_path=max(dp[i][j],max_path);
            }
            else if(j==n-1){
                 dp[i][j]=a[i][j]+max(dp[i-1][j],dp[i-1][j-1]);
                 max_path=max(dp[i][j],max_path);
            }
            else{
                dp[i][j]=a[i][j]+max(max(dp[i-1][j],dp[i-1][j-1]),dp[i-1][j+1]);
                max_path=max(dp[i][j],max_path);
            }
    } 
    }
    cout << max_path; 
    return 0;
}
    
