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
class Solution
{
public:
    int minDepth(TreeNode *root)
    {
        ios_base::sync_with_stdio(false);
        if (!root)
            return 0;
        if (root->left && root->right)
        {
            return (1 + min(minDepth(root->left), minDepth(root->right)));
        }
        else
        {
            return (1 + max(minDepth(root->left), minDepth(root->right)));
        }
    }
};

class Solution
{
public:
    int minDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int left = minDepth(root->left);
        int right = minDepth(root->right);

        if (right == 0 || left == 0)
            return max(left, right) + 1;
        root->left = NULL;
        root->right = NULL;
        return min(left, right) + 1;
    }
};