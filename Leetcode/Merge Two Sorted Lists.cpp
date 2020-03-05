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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *ans = NULL;
        if (l1 == NULL && l2 == NULL)
        {
            return ans;
        }

        ans = new ListNode(0);
        ListNode *temp = ans;

        vector<int> for_sort;
        while (l1 != NULL)
        {
            for_sort.push_back(l1->val);
            l1 = l1->next;
        }
        while (l2 != NULL)
        {
            for_sort.push_back(l2->val);
            l2 = l2->next;
        }

        sort(for_sort.begin(), for_sort.end());
        for (int i = 0; i < for_sort.size(); i++)
        {
            temp->val = for_sort[i];
            if (i != for_sort.size() - 1)
                temp->next = new ListNode(0);
            temp = temp->next;
        }

        return ans;
    }
};