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
int n;
int pre[1005], in[1005];
struct Node{
    int data;
    Node *left;
    Node *right;
    Node (int val){
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
    Node (int val, Node *l, Node *r){
        this->data = val;
        this->left = l;
        this->right = r;
    }
};
int search(int arr[], int n, int key){
    for (int i=0; i<n; i++)
        if (arr[i] == key)
            return i;
    
    return -1;
}
void buildTree(Node *root, int in_left, int in_right){
    int in_root_pos = search(in, n, root->data);
    int pre_root_pos = search(pre, n, root->data);
    if (in_root_pos > in_left){
        int left_val = pre[pre_root_pos+1];
        root->left = new Node(left_val);
        buildTree(root->left, in_left, in_root_pos-1);
    }
    if (in_root_pos < in_right){
        int left_size = in_root_pos - in_left;
        int right_val = pre[pre_root_pos + left_size +1];
        root->right = new Node(right_val);
        buildTree(root->right, in_root_pos+1, in_right);
    }
}
void printPos(Node *root){
    if (root == nullptr)
        return;
    printPos(root->left);
    printPos(root->right);
    cout << root->data << ' ';
}
void solve(){
    Node *root = new Node(pre[0]);
    buildTree(root, 0, n-1);
    printPos(root);
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> pre[i];
    for (int i=0; i<n; i++)
        cin >> in[i];
    solve();
    return 0;
}