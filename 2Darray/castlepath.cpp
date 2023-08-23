#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101];
void bfs(int i, int j){
    queue<pair<int,int>> q;
    q.push({i,j});
    a[i][j]=1;
    int count = 0;
    ++count;
    while (!q.empty()){
        pair<int,int> top = q.front();
        q.pop();
        for (int k=1; k<n; k++){
            int i1 = top.first+k, j1=top.second;
            if (i1>=n) 
                break;
            if (a[i1][j1]==1)
                break;
            q.push({i1,j1});
            a[i1][j1]=1;
            ++count;
        }
        for (int k=1; k<n; k++){
            int i1 = top.first-k, j1=top.second;
            if (i1<0) 
                break;
            if (a[i1][j1]==1)
                break;
            q.push({i1,j1});
            a[i1][j1]=1;
            ++count;
        }
        for (int k=1; k<n; k++){
            int i1 = top.first, j1=top.second+k;
            if (j1>=n) 
                break;
            if (a[i1][j1]==1)
                break;
            q.push({i1,j1});
            a[i1][j1]=1;
            ++count;
        }
        for (int k=1; k<n; k++){
            int i1 = top.first, j1=top.second-k;
            if (j1<0) 
                break;
            if (a[i1][j1]==1)
                break;
            q.push({i1,j1});
            a[i1][j1]=1;
            ++count;
        }
    }
    cout << count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int s,t;
    cin >> n >> s >> t;
    --s;--t;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin >>a[i][j];
    
    bfs(s,t);
    return 0;
}
