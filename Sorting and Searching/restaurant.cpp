#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first < b.first;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    for (int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;
        v.push_back({x,1});
        v.push_back({y,-1});
    }
    sort(v.begin(),v.end(),cmp);
    ll cnt = -1e9, res =0;
    for (int i=0; i<2*n; i++){
        res +=v[i].second;
        cnt = max(cnt, res);
    }
    cout << cnt;
    return 0;
}