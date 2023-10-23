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
   TreeNode *bstToGst(TreeNode *root)
   {
      long sum = 0;
      stack<TreeNode *> st;
      TreeNode *node = root;
      // while(true){
      //     if(node){
      //         st.push(node);
      //         node = node->right;
      //     }else{
      //         if(st.empty()) break;
      //         node = st.top();
      //         st.pop();
      //         sum += node->val;
      //         node->val = sum;
      //         node = node->left;
      //     }
      // }
      while (node || !st.empty())
      {
         while (node)
         {
            st.push(node);
            node = node->right;
         }
         node = st.top();
         st.pop();
         sum += node->val;
         node->val = sum;
         node = node->left;
      }
      // right side se inorder dfs
      // right root left pass a variable sum as reference
      return root;
   }
};