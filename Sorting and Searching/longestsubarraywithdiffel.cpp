#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;
using ll = long long;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int a[1005];
    for (int &x:a) cin >> x;
    int cur=1, max_len=1, idx=1;
    ll cur_sum=a[0], ans_sum=a[0];
    for (int i=1; i<n; i++){
        if (a[i]!=a[i-1]){
            cur++;
            cur_sum+=a[i];
        }
        else{
            cur=1;
            cur_sum=a[i];
        }
        if (cur>=max_len){
            if (cur==max_len){
                if (cur_sum>ans_sum){
                    idx=i;
                    ans_sum=cur_sum;
                }
            }
            max_len=cur;
            idx=i;
        }
    }
    cout << max_len << endl;
    for (int i=idx-max_len+1; i<=idx; i++)
        cout << a[i] << ' ';
    return 0;
}