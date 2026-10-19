#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Definition of a Tree Node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to insert a node in BST
TreeNode* insert(TreeNode* root, int val) {
    if (!root) return new TreeNode(val);
    if (val < root->val) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

// Function to search a value in BST
bool search(TreeNode* root, int val) {
    if (!root) return false;
    if (root->val == val) return true;
    return val < root->val ? search(root->left, val) : search(root->right, val);
}

// Function to find minimum value node in BST
TreeNode* findMin(TreeNode* root) {
    while (root && root->left) root = root->left;
    return root;
}

// Function to delete a node in BST
TreeNode* deleteNode(TreeNode* root, int val) {
    if (!root) return root;
    if (val < root->val) root->left = deleteNode(root->left, val);
    else if (val > root->val) root->right = deleteNode(root->right, val);
    else {
        if (!root->left) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        TreeNode* temp = findMin(root->right);
        root->val = temp->val;
        root->right = deleteNode(root->right, temp->val);
    }
    return root;
}

// Inorder Traversal (Left, Root, Right)
void inorder(TreeNode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

// Preorder Traversal (Root, Left, Right)
void preorder(TreeNode* root) {
    if (!root) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder Traversal (Left, Right, Root)
void postorder(TreeNode* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

// Level Order Traversal (BFS)
void levelOrder(TreeNode* root) {
    if (!root) return;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();
        cout << node->val << " ";
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
}

// Function to calculate height of the tree
int height(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(height(root->left), height(root->right));
}

// Function to count number of nodes
int countNodes(TreeNode* root) {
    if (!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Function to check if tree is balanced
bool isBalanced(TreeNode* root) {
    if (!root) return true;
    int lh = height(root->left);
    int rh = height(root->right);
    return abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right);
}

// Function to find maximum value in BST
int findMax(TreeNode* root) {
    while (root && root->right) root = root->right;
    return root ? root->val : -1;
}

// Function to find minimum value in BST
int findMinVal(TreeNode* root) {
    while (root && root->left) root = root->left;
    return root ? root->val : -1;
}

// Function to check if tree is BST
bool isBST(TreeNode* root, int minVal = INT32_MIN, int maxVal = INT32_MAX) {
    if (!root) return true;
    if (root->val <= minVal || root->val >= maxVal) return false;
    return isBST(root->left, minVal, root->val) && isBST(root->right, root->val, maxVal);
}

// Function to mirror the tree
TreeNode* mirror(TreeNode* root) {
    if (!root) return nullptr;
    TreeNode* temp = root->left;
    root->left = mirror(root->right);
    root->right = mirror(temp);
    return root;
}

// Function to find LCA (Lowest Common Ancestor) in BST
TreeNode* LCA(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (!root) return nullptr;
    if (root->val > p->val && root->val > q->val) return LCA(root->left, p, q);
    if (root->val < p->val && root->val < q->val) return LCA(root->right, p, q);
    return root;
}

// Function to print paths from root to leaf
void printPaths(TreeNode* root, vector<int>& path) {
    if (!root) return;
    path.push_back(root->val);
    if (!root->left && !root->right) {
        for (int val : path) cout << val << " ";
        cout << endl;
    } else {
        printPaths(root->left, path);
        printPaths(root->right, path);
    }
    path.pop_back();
}

// Main function to demonstrate
int main() {
    TreeNode* root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    cout << "Level Order Traversal: ";
    levelOrder(root);
    cout << endl;

    cout << "Height of tree: " << height(root) << endl;
    cout << "Number of nodes: " << countNodes(root) << endl;
    cout << "Is balanced: " << (isBalanced(root) ? "Yes" : "No") << endl;
    cout << "Is BST: " << (isBST(root) ? "Yes" : "No") << endl;
    cout << "Max value: " << findMax(root) << endl;
    cout << "Min value: " << findMinVal(root) << endl;

    cout << "Search 40: " << (search(root, 40) ? "Found" : "Not Found") << endl;

    cout << "Deleting 20..." << endl;
    root = deleteNode(root, 20);
    cout << "Inorder after deletion: ";
    inorder(root);
    cout << endl;

    cout << "Paths from root to leaf:" << endl;
    vector<int> path;
    printPaths(root, path);

    return 0;
}