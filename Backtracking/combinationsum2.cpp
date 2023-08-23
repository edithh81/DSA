#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define REP(i, b) for(int i = 0; i < b; i++)
#define PER(i, b) for(int i = b - 1; i >= 0; i--)
#define fi first
#define se second
#define all(x) x.begin(),x.end()
using pii = pair<int, int>;
const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, 1, 0, -1};
int n,k,N;
int X[1005];
int Y[1005];
bool flag = false;
vector<vector<int>> ans;
vector<int> nums;
bool prime(int x){
    for (int i=2; i<=sqrt(x); i++)
        if (x%i==0)
            return false;
    return x>1;
}
void pre(){
    cin >> n >> k;
    nums.push_back(0);
    for (int i=2; i<=n; i++)
        if (prime(i))
            nums.push_back(i);
    N=nums.size()-1;
}
void bt(int i, int start){
   for (int j=X[i-1]+1; j<=N-k+i; j++){
        X[i]=j;
        Y[start]=nums[j];
        if (i==k){
            int sum = accumulate(Y+1, Y+1+k,0);
            if (sum==n){
                flag = true;
                vector<int> tmp(Y+1,Y+1+k);
                ans.push_back(tmp);
            }
        }
        else
            bt(i+1,start+1);
   }
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    pre();
    bt(1,1);
    if (flag){
        for (auto it : ans){
            for (int i=0; i<it.size(); i++){
                cout << it[i];
                if (i!=it.size()-1)
                    cout <<" + ";
                else    
                    cout << endl;
            }
        }
    }
    else    
        cout << "NOT FOUND";
    return 0;
}
