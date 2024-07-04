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
class Solution
{
public:
   ListNode *mergeNodes(ListNode *head)
   {
      ListNode *dummy = new ListNode(1, head);
      ListNode *ptr = dummy, *node = dummy;
      int sum = 0;
      while (ptr)
      {
         if (ptr->val == 0)
         {
            node->next = ptr->next;
            node = ptr->next;
         }
         else if (ptr != node)
         {
            node->val += ptr->val;
         }
         ptr = ptr->next;
      }
      return dummy->next;
   }
};