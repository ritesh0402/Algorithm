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
   vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
   {
      vector<int> ans;
      TreeNode *n1 = root1, *n2 = root2;
      stack<TreeNode *> s1, s2;
      int num1 = INT_MAX, num2 = INT_MAX;
      while (n1 || !s1.empty() || n2 || !s2.empty())
      {
         while (n1)
         {
            s1.push(n1);
            n1 = n1->left;
         }

         while (n2)
         {
            s2.push(n2);
            n2 = n2->left;
         }

         if (s2.empty() || (!s1.empty() && s1.top()->val <= s2.top()->val))
         {
            n1 = s1.top();
            s1.pop();
            ans.push_back(n1->val);
            n1 = n1->right;
         }
         else
         {
            n2 = s2.top();
            s2.pop();
            ans.push_back(n2->val);
            n2 = n2->right;
         }
      }
      return ans;
   }
};