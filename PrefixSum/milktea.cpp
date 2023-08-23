#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, k, q;
    cin >> n >> k >> q;
    vector<pair<int,bool>>a(200001,{0,false});
    while(n--){
        int l, r;
        cin >> l >> r;
        --l;--r;
        a[l].first+=1;
        a[r+1].first-=1;
    }
    if (a[0].first>=k)
        a[0].second=true;
    for (int i=1; i<200001; i++){
            a[i].first+=a[i-1].first;
            if (a[i].first>=k)
                a[i].second = true;
    }
    int F[200001]={0};
    for (int i=0; i<200001; i++){
        if (i==0)
            F[i]=a[i].second;
        else 
            F[i]=F[i-1]+a[i].second;
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        --l;--r;
        if (l==0) cout << F[r] << endl;
        else 
            cout << F[r]-F[l-1] << endl;
    }
    return 0;
}
