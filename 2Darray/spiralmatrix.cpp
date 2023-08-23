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
    int r1=1, r2=n, c1=1, c2=n;
    int a[100+1][100+1];
    int tmp = 1;
    while (r1<=r2 && c1<=c2){
        // row 1
        for (int i=c1; i<=c2; i++){
            a[r1][i]=tmp;
            tmp++;
        }
        ++r1;
        for (int i=r1; i<=r2; i++){
            a[i][c2]=tmp;
            tmp++;
        }
        --c2;
        if (c1<=c2){
            for (int i=c2; i>=c1; i--){
                a[r2][i]=tmp;
                tmp++;
            }
            --r2;
        }
        
        if (r1<=r2){
            for (int i=r2; i>=r1; i--){
                a[i][c1]=tmp;
                tmp++;
            }
            ++c1;
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
