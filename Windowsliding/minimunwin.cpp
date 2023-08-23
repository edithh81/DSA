#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s,t;
    cin >> s >> t;
    map<char,int> s2;
    for (char x:t)
        s2[x]++;
    int count = 0, min_len=1e9+7, idx = -1, l=0;
    int size1=s.length();
    int size2=t.length();
    map<char,int> s1;
    for (int i=0; i<size1; i++){
        s1[s[i]]++;
        if (s1[s[i]] <=s2[s[i]]) ++count;
        if (count == size2){
            while (s1[s[l]]>s2[s[l]]||s2[s[l]]==0){
                s1[s[l]]--;
                ++l;
            }
            if (min_len > i-l+1){
                min_len=i-l+1;
                idx=l;
            }
        }
    }
    cout << s.substr(idx,min_len);
    return 0;
}
