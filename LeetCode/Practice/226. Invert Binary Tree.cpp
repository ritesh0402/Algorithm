/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        preorderSwap(root);
        return root;
    }

    void preorderSwap(TreeNode* root){
        if(!root) return;
        TreeNode* temp = root->left;

        root->left = root->right;
        root->right = temp;
        preorderSwap(root->left);
        preorderSwap(root->right);
    }
};

// class Solution {
// public:
//     TreeNode* invertTree(TreeNode* root) {
//         if(!root) return root;
//         stack<TreeNode*> stk;
//         stk.push(root);

//         while(!stk.empty()){
//             root = stk.top();
//             stk.pop();
//             TreeNode* temp = root->left;

//             root->left = root->right;
//             root->right = temp;
//             if(!root->right) stk.push(root->right);
//             if(!root->left) stk.push(root->left);
            
//         }

//         return root;
//     }

// };