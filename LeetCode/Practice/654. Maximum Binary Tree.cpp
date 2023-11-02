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
   TreeNode *constructMaximumBinaryTree(vector<int> &nums)
   {
      return helper(0, nums.size() - 1, nums);
   }

   TreeNode *helper(int l, int r, vector<int> &nums)
   {
      if (l > r)
         return NULL;
      int maxN = max_element(nums.begin() + l, nums.begin() + r + 1) - nums.begin();
      TreeNode *node = new TreeNode(nums[maxN]);
      node->left = helper(l, maxN - 1, nums);
      node->right = helper(maxN + 1, r, nums);
      return node;
   }
};