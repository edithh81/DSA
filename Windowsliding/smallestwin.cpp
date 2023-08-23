#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin >> s;
    map<char,int> m;
    for (char x:s)
        m[x]++;
    int len = m.size();
    int ans = 1e9+7, count = 0 , left = 0;
    map <char,int> temp;
    for (int i=0; i< s.size(); i++){
        temp[s[i]]++;
        if (temp[s[i]]==1) ++count;
        if (count == len ){
            while(temp[s[left]]>1){
                temp[s[left]]--;
                ++left;
            }
            ans = min(ans, i-left+1);
        }
    }
    cout << ans;
    return 0;
}
