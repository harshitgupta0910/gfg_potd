// Author: D HARSHIT  
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define print(x) cout << x << '\n'

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
public:
    int findMaxSum(Node* root) {
        int maxSum = LLONG_MIN;
        helper(root, maxSum);
        return maxSum;
    }

private:
    int helper(Node* node, int &maxSum) {
        if (!node) return 0;
        int leftMax = max(0LL, helper(node->left, maxSum));
        int rightMax = max(0LL, helper(node->right, maxSum));
        maxSum = max(maxSum, leftMax + rightMax + node->data);
        return node->data + max(leftMax, rightMax);
    }
};

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    Node* root = new Node(10);
    root->left = new Node(2);
    root->right = new Node(10);
    root->left->left = new Node(20);
    root->left->right = new Node(1);
    root->right->right = new Node(-25);
    root->right->right->left = new Node(3);
    root->right->right->right = new Node(4);

    Solution sol;
    print(sol.findMaxSum(root));

    return 0;
}
