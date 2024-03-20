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

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

auto __untie_cin = cin.tie(nullptr);
auto __unsync_ios_stdio = ios_base::sync_with_stdio(false);
class Solution
{
public:
   ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
   {
      ListNode *ptr1 = list1, *ptr2 = list1, *ptr3 = list2, *temp;

      while (--a)
      {
         ptr1 = ptr1->next;
         ptr2 = ptr2->next;
         b--;
      }
      ptr2 = ptr2->next;
      while (b--)
      {
         temp = ptr2;
         ptr2 = ptr2->next;
         delete temp;
      }
      ptr1->next = list2;
      while (ptr3->next)
         ptr3 = ptr3->next;
      ptr3->next = ptr2;

      return list1;
   }
};