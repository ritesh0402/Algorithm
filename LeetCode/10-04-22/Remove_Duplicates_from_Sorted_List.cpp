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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *ret = head;
        if (head != NULL)
        {
            while (head->next != NULL)
            {
                if (head->val != head->next->val)
                {
                    temp->next = head->next;
                    temp = temp->next;
                }
                head = head->next;
            }
            temp->next = NULL;
        }
        return ret;
    }
};