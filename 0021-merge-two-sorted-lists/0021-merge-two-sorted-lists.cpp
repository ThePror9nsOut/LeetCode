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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL && list2 == NULL)
            return list1;
        if (list1 != NULL && list2 == NULL)
            return list1;
        if (list1 == NULL && list2 != NULL)
            return list2;

        ListNode* result = new ListNode;
        ListNode* head = result;

        while (true) {
            if (list1 != NULL && list2 != NULL) {
                if (list1->val <= list2->val) {
                    result->val = list1->val;
                    list1 = list1->next;
                }
                else if (list2->val <= list1->val) {
                    result->val = list2->val;
                    list2 = list2->next;
                }

                if (list1 != NULL && list2 != NULL) {
                    result->next = new ListNode;
                    result = result->next;
                }
            }
            else {
                while (list1 != NULL) {
                    result->next = new ListNode;
                    result = result->next;

                    result->val = list1->val;
                    list1 = list1->next;
                }

                while (list2 != NULL) {
                    result->next = new ListNode;
                    result = result->next;

                    result->val = list2->val;
                    list2 = list2->next;
                }

                break;
            }
        }

        return head;
    }
};