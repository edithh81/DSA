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
void inorder(Node *root){
    if (root == nullptr)    return;
    inorder(root->left);
    cout << root->data << ' ';
    inorder(root->right);
}
void preorder(Node *root){
    if (root == nullptr)    return;
    cout << root->data << ' ';
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root){
    if (root == nullptr)    return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << ' ';
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    Node *root = nullptr;
    for (int i=0; i<n; i++){
        int x,y;
        char z;
        cin >> x >> y >> z;
        if (root == nullptr){
            root = new Node(x);
            insertNode(root, x, y, z);
        }
        else insertNode(root, x, y, z);
    }
    postorder(root);
    return 0;
}