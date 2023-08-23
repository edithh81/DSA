#include<bits/stdc++.h>
using namespace std;
int n;
int a[105][105];
bool dp[105][105];
int dx[8]={ -2,-2,-1,-1, 1, 1, 2, 2};
int dy[8]={ -1, 1,-2, 2,-2, 2,-1, 1};

void mark(int i, int j){
    
    for (int k=0; k<8; k++){
        int i1=i+dx[k], j1=j+dy[k];
        if (i1>=0 && i1<n && j1>=0 &&j1<n&&a[i1][j1]==1 && !dp[i1][j1]){
            // cout << i1 << " " << j1 << "\n";
            dp[i1][j1]=1;
            mark(i1,j1);
        }
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin >> n ;
    int s,t,u,v;
    cin >> s >> t >> u >> v;
    --s;--t;--u;--v;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin >> a[i][j];

    dp[s][t] = 1; 
    mark(s,t);
    if(dp[u][v]) cout << "YES";
    else cout << "NO";
    return 0;
}