// Author: D HARSHIT 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> sti;
typedef map<int, int> mpii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define len(s) (int)s.size()
#define print(x) cout << x << '\n'
#define ull unsigned long long

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Global variables
Node *first, *middle, *last, *p;

void inorderTraversal(Node* root) {
    if (!root) return;
    
    inorderTraversal(root->left);

    if (p && root->data < p->data) {
        if (!first) { 
            first = p;
            middle = root;
        } else {
            last = root;
        }
    }
    p = root;

    inorderTraversal(root->right);
}

void correctBST(Node* root) {
    first = middle = last = p = NULL;
    inorderTraversal(root);

    if (first && last) swap(first->data, last->data);
    else if (first && middle) swap(first->data, middle->data); 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    // Example BST with a swapped pair
    Node* root = new Node(6);
    root->left = new Node(10);
    root->right = new Node(2);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(12);
    root->right->left = new Node(7);

    cout << "Before correction:\n";
    inorderTraversal(root);
    cout << "\n";

    correctBST(root);

    cout << "After correction:\n";
    inorderTraversal(root);
    cout << "\n";

    return 0;
}
