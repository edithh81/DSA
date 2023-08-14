#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first < b.first;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for (int i=0; i<n; i++){
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(),v.end(), cmp);
    int cnt = 1;
    for (int i=1; i<n; i++){
        if (v[i].second>v[i-1].second)
            continue;
        else 
            ++cnt;
    }
    cout << cnt;
    return 0;
}