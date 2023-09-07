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
   ListNode *swapPairs(ListNode *head)
   {
      ListNode pre = ListNode(0, head);
      ListNode *ptr, *temp1, *temp2, *nxt;

      ptr = &pre;
      while (ptr->next && ptr->next->next)
      {
         temp1 = ptr->next;
         temp2 = ptr->next->next;
         nxt = ptr->next->next->next;
         ptr->next = temp2;
         temp2->next = temp1;
         temp1->next = nxt;
         ptr = ptr->next->next;
      }

      return pre.next;

      // ListNode **pp = &head, *a, *b;
      // while ((a = *pp) && (b = a->next)) {
      //     a->next = b->next;
      //     b->next = a;
      //     *pp = b;
      //     pp = &(a->next);
      // }
      // return head;
   }
};