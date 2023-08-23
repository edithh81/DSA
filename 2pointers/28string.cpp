#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
using ll = long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    cin >> s;
    int x,y;
    cin >> x >> y;
    int max_len=-1e9;
    int len = s.length();
    int l=0;
    map<char,int> m;
    string res="";
    for (int i=0; i<len; i++){
        m[s[i]]++;
        res+=s[i];
        while(m['2']>x || m['8'] >y){
            m[s[l]]--;
            res.erase(0,1);
            l++;
            int tmp =res.length();
            max_len=max(max_len,tmp);
        }
        int tmp =res.length();
            max_len=max(max_len,tmp);
    }
    cout << max_len;
    return 0;
}
