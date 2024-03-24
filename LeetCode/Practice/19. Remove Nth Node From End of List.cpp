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
   ListNode *removeNthFromEnd(ListNode *head, int n)
   {
      ListNode *dummy = new ListNode(0);
      dummy->next = head;
      ListNode *ptr1 = dummy, *ptr2 = dummy, *temp;
      while (n--)
      {
         ptr1 = ptr1->next;
      }
      while (ptr1 && ptr1->next)
      {
         ptr1 = ptr1->next;
         ptr2 = ptr2->next;
      }
      temp = ptr2->next;
      ptr2->next = ptr2->next->next;
      delete temp;
      return dummy->next;
   }
};