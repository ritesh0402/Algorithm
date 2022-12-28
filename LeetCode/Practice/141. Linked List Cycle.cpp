/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         while(head  && head->next ){
//             head->val = -69;
//             if(head->next->val == -69){
//                 return true;
//             }
//             head = head->next;
//         }
//         return false;
//     }
// };

class Solution
{
public:
   bool hasCycle(ListNode *head)
   {
      ListNode *slow, *fast;
      fast = head;
      slow = head;
      while (fast && fast->next)
      {
         slow = slow->next;
         fast = fast->next->next;
         if (slow == fast)
         {
            return true;
         }
      }
      return false;
   }
};