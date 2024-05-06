/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
   TreeNode *sortedListToBST(ListNode *head)
   {
      TreeNode *root = makeTree(head);
      return root;
   }

   TreeNode *makeTree(ListNode *list)
   {
      if (!list)
         return NULL;
      if (!list->next)
         return new TreeNode(list->val);
      ListNode *slow = list, *fast = list->next->next;
      while (fast && fast->next)
      {
         slow = slow->next;
         fast = fast->next->next;
      }
      TreeNode *node = new TreeNode(slow->next->val);
      node->right = makeTree(slow->next->next);
      slow->next = NULL;
      node->left = makeTree(list);
      return node;
   }
};

class Solution
{
public:
   TreeNode *sortedListToBST(ListNode *head)
   {
      return helper(head, NULL);
   }

   TreeNode *helper(ListNode *start, ListNode *end)
   {
      if (start == end)
         return NULL;
      ListNode *slow = start, *fast = start;
      while (fast != end && fast->next != end)
      {
         slow = slow->next;
         fast = fast->next->next;
      }
      TreeNode *node = new TreeNode(slow->val);
      node->left = helper(start, slow);
      node->right = helper(slow->next, end);
      return node;
   }
};

class Solution
{
public:
   int lengthOfList(ListNode *head)
   {
      int cnt = 0;
      while (head)
      {
         cnt++;
         head = head->next;
      }
      return cnt;
   }

   TreeNode *sortedListToBST(ListNode *head, int len)
   {
      if (!head || len < 1)
         return nullptr;
      ListNode *node = head, *prev = nullptr;
      int i = 0;
      while (i++ < len / 2)
      {
         prev = node;
         node = node->next;
      }
      if (prev)
         prev->next = nullptr;
      TreeNode *root = new TreeNode(node->val);
      if (len / 2)
         root->left = sortedListToBST(head, len / 2);
      if (len - len / 2)
         root->right = sortedListToBST(node->next, len - len / 2 - 1);
      return root;
   }

   TreeNode *sortedListToBST(ListNode *head)
   {
      return sortedListToBST(head, lengthOfList(head));
   }
};