#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[1001][1001];
void inp(){
    cin >> n >> m;
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin >> a[i][j];
    
}
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
int cnt=0;
int max_s=-1e9;
void bfs(int i, int j){
    queue<pair<int,int>> q;
    q.push({i,j});
    a[i][j]=0;
    ++cnt;
    while(!q.empty()){
        pair<int,int> top = q.front();
        q.pop();
        for (int k=0; k<4; k++){
            int i1=top.first+dx[k], j1=top.second+dy[k];
            if (i1>=0&&i1<n&&j1>=0&&j1<m&&a[i1][j1]==1){
                q.push({i1,j1});
                a[i1][j1]=0;
                ++cnt;
            }
        }
    }
    max_s=max(max_s,cnt);
    cnt=0;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    inp();
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (a[i][j]==1){    
                bfs(i,j);
            }
        }
    }
    cout << max_s;
    
    return 0;
}
