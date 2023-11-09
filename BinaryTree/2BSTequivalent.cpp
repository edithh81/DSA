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
int n, m;
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
bool isEquivalent(Node *root1, Node *root2){
    if (root1 == nullptr && root2 == nullptr)   return true;
    if (root1 == nullptr && root2 || root1 && root2 == nullptr)
        return false;
    if (root1->data != root2->data)
        return false;
    return isEquivalent(root1->left, root2->left) && isEquivalent(root1->right, root2->right);
}
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("oup.txt", "w", stdout);
    cin >> n;
    Node *root1 = nullptr;
    for (int i=0; i<n; i++){
        int x,y;
        char c;
        cin >> x >> y >> c;
        if (root1 == nullptr){
            root1 = new Node(x);
            insertNode(root1, x, y, c);
        }
        else
            insertNode(root1, x, y, c);
    }
    cin >> m;
    if (n!=m){
        cout << "NO";
        return 0;
    }
    Node *root2 = nullptr;
    for (int i=0; i<n; i++){
        int x,y;
        char c;
        cin >> x >> y >> c;
        if (root2 == nullptr){
            root2 = new Node(x);
            insertNode(root2, x, y, c);
        }
        else
            insertNode(root2, x, y, c);
    }
    cout << (isEquivalent(root1, root2)?"YES" : "NO");
    return 0;
}