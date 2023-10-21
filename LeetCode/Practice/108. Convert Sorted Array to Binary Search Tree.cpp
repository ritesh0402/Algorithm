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
   TreeNode *sortedArrayToBST(vector<int> &nums)
   {
      int n = nums.size();
      TreeNode *root = helper(0, n - 1, nums);
      return root;
   }

   TreeNode *helper(int l, int r, vector<int> &nums)
   {
      int mid = l + (r - l) / 2;
      TreeNode *node = new TreeNode(nums[mid]);
      if (mid - 1 >= l)
         node->left = helper(l, mid - 1, nums);
      if (r > mid)
         node->right = helper(mid + 1, r, nums);
      return node;
   }
};