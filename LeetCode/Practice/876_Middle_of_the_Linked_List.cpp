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
    ListNode *middleNode(ListNode *head)
    {
        ListNode *mid = head;
        int i = 1;
        while (head->next != NULL)
        {
            if (i % 2 != 0)
            {
                mid = mid->next;
            }
            i++;
            head = head->next;
        }
        return mid;
    }
};