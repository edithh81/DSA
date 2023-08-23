#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
int a[1001][1001];
void mark( int i, int j){
    a[i][j]=0;
    int dx[4]={-1,0,0,1};
    int dy[4]={0,1,-1,0};
    for (int k=0; k<4; k++){
        int i1=i+dx[k], j1=j+dy[k];
        if (i1>=0&&i1<n&&j1>=0&&j1<m&&a[i1][j1]==1)
            mark(i1,j1);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin >> n >> m;
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin >> a[i][j];
    // move
    // int dx[4]={-1,0,0,1};
    // int dy[4]={0,1,-1,0};
    int count = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            // check(i,j)
            if (a[i][j]==1){
                count++;
                mark(i,j);
            }
        }
    }
    cout << count;
    return 0;
}
