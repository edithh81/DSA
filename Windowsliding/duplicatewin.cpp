#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool check(int a[], int n, int k){
    for (int i=0; i<n; i++){
        int j1=i-k, j2=i+k;
        while(j2>=0){
            if (a[i]==a[j2]&&j2!=i)
                return true;
            --j2;
        }
    }
    return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin >> n >> k;
    int a[10005];
    for (int &x:a) 
        cin >> x;
    if (check(a,n,k)) cout <<"YES";
    else cout << "NO";
    return 0;
}
