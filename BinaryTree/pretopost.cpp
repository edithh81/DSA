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
int pre[1005];
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
void makeNode(Node *root, int u, int v, char c){
    if (c == 'L') root->left = new Node(v);
    else          root->right = new Node(v);

}
void insertNode(Node *root, int u, int v, char c){  
    if (root == nullptr)    return;
    if (root -> data == u){
        makeNode(root, u, v, c);
    }
    else{
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}
Node *insert(Node *root, int key){
    if (root == nullptr)    return new Node(key);
    if (key < root->data ) 
        root->left = insert(root->left, key);
    else    root->right = insert(root->right, key);
    return root;
}
void buildTree(Node *root, int key){
    if (key < root->data){
        if (root->left)
            buildTree(root->left, key);
        else root->left = new Node(key);
    }
    else{
        if (root->right)
            buildTree(root->right, key);
        else root->right = new Node(key);
    }
}
void printPos(Node *root){
    if (root == nullptr)    return;
    printPos(root->left);
    printPos(root->right);
    cout << root->data << ' ';
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> pre[i];
    Node *root = new Node(pre[0]);
    for (int i=1; i<n; i++){
        buildTree(root, pre[i]);
    }
    printPos(root);
    return 0;
}