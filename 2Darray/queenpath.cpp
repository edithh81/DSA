#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
int a[101][101];

void bfs(int i, int j){
    queue<pair<int,int>> q;
    q.push({i,j});
    a[i][j]=1;
    int count = 0;
    ++count;
     while(!q.empty()){
        pair<int,int> top = q.front();
        q.pop();
        for (int k=1; k<=n; k++){
            int i1 = top.first-k, j1=top.second+k;
            if (i1<0||j1<0||i1>n||j1>n)
                break;
            if(i1>=0&&i1<n&&j1>=0&&j1<n&&a[i1][j1]==1)
                break;
            if (i1>=0&&i1<n&&j1>=0&&j1<n){
                q.push({i1,j1});
                a[i1][j1]=1;
                ++count;
            }
        }
        for (int k=1; k<n; k++){
            int i1=top.first+k, j1=top.second-k;
            if (i1<0||j1<0||i1>n||j1>n)
                break;
            if(i1>=0&&i1<n&&j1>=0&&j1<n&&a[i1][j1]==1)
                break;
            if (i1>=0&&i1<n&&j1>=0&&j1<n){
                q.push({i1,j1});
                a[i1][j1]=1;
                ++count;
            }
        }
         for (int k=1; k<n; k++){
            int i1=top.first+k, j1=top.second+k;
             if (i1<0||j1<0||i1>n||j1>n)
                break;
            if(i1>=0&&i1<n&&j1>=0&&j1<n&&a[i1][j1]==1)
                break;
            if (i1>=0&&i1<n&&j1>=0&&j1<n){
                q.push({i1,j1});
                a[i1][j1]=1;
                ++count;
            }
        }
         for (int k=1; k<n; k++){
            int i1=top.first-k, j1=top.second-k;
             if (i1<0||j1<0||i1>n||j1>n)
                break;
            if(i1>=0&&i1<n&&j1>=0&&j1<n&&a[i1][j1]==1)
                break;
            if (i1>=0&&i1<n&&j1>=0&&j1<n){
                q.push({i1,j1});
                a[i1][j1]=1;
                ++count;
            }
        }
    }
    cout << count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int s,t;
    cin >> n >> s >> t;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin >> a[i][j];
    
    --s;--t;
    bfs(s,t);
    return 0;
}
