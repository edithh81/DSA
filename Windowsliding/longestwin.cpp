#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin >> s;
    int max_len=-1e9;
    multiset<char> se;
    int j=0;
    for (int i=0; i<s.size(); i++){
        if (se.count(s[i])==0){
            se.insert(s[i]);
            max_len=max(max_len,i-j+1);
        }
        else {
            while(se.count(s[i])){
                se.erase(s[j]);
                j++;
            }
            se.insert(s[i]);
        }
    }
    cout << max_len;
    return 0;
}
