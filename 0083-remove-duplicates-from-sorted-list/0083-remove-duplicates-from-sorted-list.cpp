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

#define disassemble delete

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> appeared;

        ListNode* node = head;
        ListNode* prev = nullptr;

        while (node != nullptr) {            
            if (find(appeared.begin(), appeared.end(), node->val) == appeared.end()) {
                
                appeared.push_back(node->val);
                prev = node;

                node = node->next;
            }
            else {
                ListNode* victim = node;
                ListNode* nextNode = node->next;

                disassemble victim;

                node = prev;
                node->next = nextNode;

                node = node->next;
            }
        }

        return head;
    }
};