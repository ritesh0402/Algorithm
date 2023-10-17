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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string path = "";
        helper(root, path, ans);
        return ans;
    }
    void helper(TreeNode* node, string path, vector<string> &ans){
        if(!node) return;

        if(node->left||node->right) path+=(to_string(node->val)+"->");
        else{
            path+=(to_string(node->val));
            ans.push_back(path);
        }

        helper(node->left, path, ans);
        helper(node->right, path, ans);
    }
};