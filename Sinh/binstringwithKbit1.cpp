#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,k, a[1005], final = 0;
void pre(){
    for (int i=1; i<=n; i++)
        a[i]=0;
}
void sinh(){
    int i = n;
    while (i>0 && a[i]==1){
        a[i]=0;
        --i;
    }
    if (i==0)
        final = 1;
    else
        a[i]=1;
    
}
bool check1(string s){
    int cnt = 0;
    for (int i = 0; i<s.length(); i++)
        cnt+=s[i]=='1';
    return cnt == k;
}
bool check2(string s){
    string tmp = string(k,'1');
    int idx = s.find(tmp);
    if (idx == string::npos)
        return false;
    for (int i = idx+1; i<n; i++){
        if (s.find(tmp,i) != string::npos)
            return false;
    }
    for (int i = k+1; i<=n; i++){
        tmp=string(i,'1');
        if (s.find(tmp) != string :: npos)
            return false;
    }
    return true;
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n >> k;
    if (k>n)
        swap(n,k);
    pre();
    set<string> s1,s2;
    while(!final){
        string tmp ="";
        for (int i=1; i<=n; i++)
            tmp+=to_string(a[i]);
        
        if (check1(tmp))
            s1.insert(tmp);
        if (check2(tmp))
            s2.insert(tmp);
        sinh();
    }
    for (string x: s1)
        cout << x << ' ';
    cout << endl;
    for (string x:s2)
        cout << x <<' ';
    return 0;
}