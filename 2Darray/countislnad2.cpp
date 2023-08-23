#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
int a[1000][1000];
void mark(int i, int j){
    a[i][j]=0;
    int dx[8]={-1,-1,-1,0,0,1,1,1};
    int dy[8]={-1,0,1,-1,1,-1,0,1};
    for (int k=0; k<8; k++){
        int idx=i+dx[k]; int idy=j+dy[k];
        if(idx>=0&&idx<n&&idy>=0&&idy<m&&a[idx][idy]==1)
            mark(idx,idy);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin >> n >> m;
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin >> a[i][j];
    int count=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (a[i][j]==1){
                ++count;
                mark(i,j);
            }
        }
    }
    cout << count;
    return 0;
}
