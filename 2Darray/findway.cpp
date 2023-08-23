#include <bits/stdc++.h>
using namespace std;
int a[10005][1005]; 
int n,m;   
bool dp[10001][1001];
void mark(int i, int j){
    a[i][j]=0;
    dp[i][j]=true;
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    for (int k=0; k<4; k++){
        int i1=i+dx[k], j1=j+dy[k];
        if (a[i1][j1]==1&&i1>=0&&i1<n&&j1>=0&&j1<m&&!dp[i1][j1]){
            mark(i1,j1);
        }
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin >> n >> m;
    int s,t,u,v;
    cin >> s >> t >> u >> v;
    --s;--t;--u;--v;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> a[i][j];
            dp[i][j]=false;
        }
    }
    mark(s,t);
    if (a[u][v]==0&&dp[u][v]) cout << "YES";
    else cout << "NO";
    return 0;
}
