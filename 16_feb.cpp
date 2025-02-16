//Author :D HARSHIT 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> sti;
typedef set<long> stl;
typedef set<char> stc;
typedef set<string> str;
typedef map<int, int> mpii;
typedef map<int, char> mpic;
typedef map<char, int> mpci;
typedef map<int, string> mpis;
typedef map<string, int> mpsi;
typedef map<string, string> mpss;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define len(s) (int)s.size()
#define print(x) cout << x << '\n'
#define ull unsigned long long
#define ll long long
#define int ll
using pii = pair<int, int>;
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
vector<int> serialize(Node *root) {
    vector<int> result;
    if (!root) return result;
    
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* node = q.front();
        q.pop();
        
        if (node) {
            result.push_back(node->data);
            q.push(node->left);
            q.push(node->right);
        } else {
            result.push_back(-1);  
        }
    }
    
    return result;
}
Node *deSerialize(vector<int> &arr) {
    if (arr.empty()) return NULL;
    
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    
    int i = 1;
    while (!q.empty() && i < arr.size()) {
        Node* node = q.front();
        q.pop();
        
        if (arr[i] != -1) {
            node->left = new Node(arr[i]);
            q.push(node->left);
        }
        i++;
        
        if (i < arr.size() && arr[i] != -1) {
            node->right = new Node(arr[i]);
            q.push(node->right);
        }
        i++;
    }
    
    return root;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}