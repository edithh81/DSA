#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for (int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    int cnt=1, et=v[0].second;
    for (int i=1; i<n; i++){
        if (et<=v[i].first){
            ++cnt;
            et=v[i].second;
        }
    }
    cout << cnt;
    return 0;
}