/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *ans = new ListNode(0);
        ListNode *temp = ans;
        while (l1 != NULL || l2 != NULL)
        {
            if (l1 != NULL)
            {
                temp->val += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL)
            {
                temp->val += l2->val;
                l2 = l2->next;
            }
            if (l1 != NULL || l2 != NULL || temp->val > 9)
            {
                temp->next = new ListNode(0);
                if (temp->val > 9)
                {
                    temp->val %= 10;
                    temp->next->val = 1;
                }
            }
            temp = temp->next;
        }
        return ans;
    }
};