#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
using ll =long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin >> n >> k;
    int a[10005];
    for (int &x:a) cin >> x;
    multiset<int> s(a, a+k);
    auto it = next (s.begin(), (k-1)/2);
    for (int i=k; i<n; i++){
        cout << *it << ' ';
        s.insert(a[i]);
        if (a[i]< *it) --it;
        if (a[i-k]<=*it) ++it;
        s.erase(s.lower_bound(a[i-k]));
    }
    cout << *it << ' ';
    return 0;
}
