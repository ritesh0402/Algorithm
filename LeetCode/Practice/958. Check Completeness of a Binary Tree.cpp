// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution
// {
// public:
//    bool isCompleteTree(TreeNode *root)
//    {
//       bool ans = true;
//       TreeNode *curr;
//       queue<TreeNode *> q;
//       q.push(root);
//       while (!q.empty())
//       {
//          curr = q.front();
//          q.pop();
//          if (!curr)
//          {
//             break;
//          }
//          q.push(curr->left);
//          q.push(curr->right);
//       }
//       while (!q.empty())
//       {
//          curr = q.front();
//          q.pop();
//          if (curr)
//          {
//             ans = false;
//          }
//       }
//       return ans;
//    }
// };

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
   bool isCompleteTree(TreeNode *root)
   {
      ios_base::sync_with_stdio(false);
      queue<TreeNode *> q;
      q.push(root);
      while (q.front())
      {
         TreeNode *curr = q.front();
         q.pop();
         q.push(curr->left);
         q.push(curr->right);
      }
      while (!q.empty() && !q.front())
      {
         q.pop();
      }
      return q.empty();
   }
};