#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int find_firstpos(int a[], int n, int i, int key){
    int res = -1;
    int l = i+1, r=n-1;
    while(l<=r){
        int m = (l+r)/2;
        if (a[m]==key){
            res = m;
            r=m-1;
        }
        else if (a[m]>key)
            r=m-1;
        else l=m+1;
    }
    return res;
}
int find_lastpos(int a[], int n, int i, int key){
    int res = -1;
    int l = i+1, r=n-1;
    while(l<=r){
        int m = (l+r)/2;
        if (a[m]==key){
            res = m;
            l=m+1;
        }
        else if (a[m]>key)
            r=m-1;
        else l=m+1;
    }
    return res;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k;
    cin >> n >> k;
    int a[1005];
    for (int &x:a)
        cin >> x;
    sort(a,a+n);
    ll res = 0;
    for (int i=0; i<n; i++){
        int pos1=find_firstpos(a,n,i,k-a[i]);
        int pos2=find_lastpos(a,n,i,k-a[i]);
        if (pos1!=-1 && pos2!=-1)
            res+=pos2-pos1+1;
    }
    cout << res;
    return 0;
}
