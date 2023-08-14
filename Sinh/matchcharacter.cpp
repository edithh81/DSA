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
int n, a[1005], final = 0;
char c;
char b[1005];
void pre(){
    for (int i=1; i<=n; i++)
        a[i]=i;
}
void sinh(){
    int i = n-1;
    while (i>0 && a[i]>a[i+1])
        --i;
    
    if (i==0)
        final = 1;
    else{
        int j = n;
        while (a[j]<a[i])
            --j;

        swap(a[i],a[j]);
        sort(a+i+1, a+n+1);
    }   
}
bool check(string s){
    if (c<'E')
        return s[0] == 'A' || s[s.length()-1] == 'A';
    if ((s[0] == 'A' && s[s.length()-1] == 'E') || (s[0]=='E' && s[s.length()-1] == 'A'))
        return true;
    return s.find("AE") != string :: npos || s.find("EA") != string :: npos;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> c;
    int j = 1;
    for (char i = 'A'; i<=c; i++)
        b[j++]=i;
    n=j-1;
    pre();
    set<string> se;
    while(!final){
        string tmp="";
        for (int i=1; i<=n; i++)
            tmp+=b[a[i]];
        if (check(tmp)){
            se.insert(tmp);
        }
        sinh();
    }
    for (string x:se)
          cout << x << endl;
    return 0;
}