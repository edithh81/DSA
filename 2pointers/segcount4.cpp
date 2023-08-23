#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
using ll = long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,k;
    cin >> n >> k;
    int a[1005];
    for (int &x:a) cin >> x;
    multiset<ll> se;
    ll count=0;
    int l=0;
    for (int i=0; i<n; i++){
        se.insert(a[i]);
        while(*se.rbegin()-*se.begin()>k){
            auto it = se.find(a[l]);
            se.erase(it);
            l++;
        }
        count+=i-l+1;
    }
    cout << count;
    return 0;
}
