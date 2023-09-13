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
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *dummy = new ListNode(0, head), *pre = dummy, *cur;
        stack<ListNode *> stk;
        ListNode* nxt = head;
        int len=1;
        while(nxt){
            nxt=nxt->next;
            len++;
        }
        nxt = head;
        for(int i=0; i+k<len; i+=k){
            
            cur = pre -> next;

            for (int j = 0; j < k; j++) {
                stk.push(cur);
                if(i+j == k-1) head = cur;
                cur = cur->next;
            }

            nxt = cur;
            while(!stk.empty()){
                cur = stk.top();
                stk.pop();
                pre->next = cur;
                pre = pre->next;
            }
            pre->next = nxt;
            
        }
        return head;
    }
};