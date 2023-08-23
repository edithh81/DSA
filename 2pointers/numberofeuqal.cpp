#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll= long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,m; cin >> n >> m;
    int a[1005],b[1005];
    ll ans=0;
    for (int &x:a) cin >> x;
    for (int &x:b) cin >> x;
    int i=0,j=0;
    while(i<n&&j<m){
        if (a[i]<b[j]){
            i++;
            continue;
        }
        else if (a[i]>b[j]){
            j++;
            continue;
        }
        int count1=0, count2=0;
        while (a[i]==b[j]){
            ++i;
            ++count1;
        }
        --i;
        while (a[i]==b[j]){
            ++j;
            count2++;
        }
        ans+=1ll*count1*count2;
    }
    cout << ans;
    return 0;
}
