#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, a[1005], final = 0;
set<ll> se;
void pre(){
    for (int i=1; i<=n; i++)
        a[i]=0;
}
void sinh(){
    int i = n;
    while (i>=1 && a[i]==1){
        a[i]=0;
        --i;
    }
    if (i==0)
        final = 1; 
    else 
        a[i]=1; 
    
}
void init(){
    for (int i = 1; i<=19; i++){
        n = i;
        pre();
        while(!final){
            string tmp = "";
            for (int i=1; i<=n; i++)
                tmp+=a[i]?"8":"0";
            ll x = stoll(tmp);
            if (x)
                se.insert(x);
            sinh();
        }
        final = 0;
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    int t;
    cin >> t;
    init();
    // for (auto x : se) cout << x << "\n";
    while(t--){
        int x;
        cin >> x;
        for (ll tmp : se){
            if (tmp%x==0){
                cout << tmp << endl;
                break;
            }
        }
    }
    return 0;
}