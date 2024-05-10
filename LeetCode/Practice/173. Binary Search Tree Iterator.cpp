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
class BSTIterator
{
public:
   stack<TreeNode *> st;
   BSTIterator(TreeNode *root)
   {
      insertAll(root);
   }

   void insertAll(TreeNode *node)
   {
      while (node != NULL)
      {
         st.push(node);
         // cout << st.top()->val << " ";
         node = node->left;
      }
      // cout << endl;
   }

   int next()
   {
      TreeNode *node = st.top();
      st.pop();
      insertAll(node->right);
      return node->val;
   }

   bool hasNext()
   {
      return !st.empty();
   }
};

class BSTIterator
{
public:
   TreeNode *curr;
   stack<TreeNode *> st;
   BSTIterator(TreeNode *root)
   {
      curr = root;
   }

   int next()
   {
      int ans = -1;
      if (curr || !st.empty())
      {
         while (curr)
         {
            st.push(curr);
            curr = curr->left;
         }
         curr = st.top();
         st.pop();
         ans = curr->val;
         curr = curr->right;
      }
      return ans;
   }

   bool hasNext()
   {
      return curr || !st.empty();
   }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */