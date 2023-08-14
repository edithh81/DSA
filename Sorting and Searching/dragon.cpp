#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp(pair<int,ll> a, pair<int,ll> b){
    return a.first < b.first;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    ll s;
    cin >> n >> s;
    vector<pair<int,ll>> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end(), cmp);
    bool flag = true;
    for (int i=0; i<n; i++){
        if (s>v[i].first){
            s+=v[i].second;
        }
        else{
            flag=false;
            break;
        }
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO";
    return 0;
}