#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin >> n >> k;
    int a[10005];
    for (int &x:a) cin >> x;
    vector<ll> v;
    for (int i=0; i<k; i++){
        v.push_back(a[i]);
    }
    cout <<*min_element(v.begin(),v.end()) << ' ' << *max_element(v.begin(),v.end()) << endl;
    for (int i=k; i<n; i++){
        v.push_back(a[i]);
        v.erase(v.begin());
        cout <<*min_element(v.begin(),v.end()) << ' ' << *max_element(v.begin(),v.end()) << endl;
    }
    return 0;
}