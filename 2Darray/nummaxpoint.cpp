#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int n,m;
int a[1001][1001];
bool check(int i, int j){
   int dx[8]={-1,-1,-1,0,0,1,1,1};
   int dy[8]={-1,0,1,-1,1,-1,0,1};
   for (int k=0; k<8; k++){
        int i1=i+dx[k],j1=j+dy[k];
        if (i1>=0&&i1<n&&j1>=0&&j1<m&&a[i][j]<=a[i1][j1])
           return false;
   }
   return true;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin >> n >> m;
    for (int i=0; i<n; i++)
       for (int j=0; j<m; j++)
            cin >> a[i][j];
    ll cnt=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if(check(i,j))
                ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
