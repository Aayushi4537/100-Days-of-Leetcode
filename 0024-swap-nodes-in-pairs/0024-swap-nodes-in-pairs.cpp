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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) {
        return head;
    }

    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* prev = dummy;
    ListNode* curr = head;

    while (curr && curr->next) {
        ListNode* nextPair = curr->next->next;
        ListNode* second = curr->next;

        // Swap the pair
        second->next = curr;
        curr->next = nextPair;
        prev->next = second;

        // Move to the next pair
        prev = curr;
        curr = nextPair;
    }

    ListNode* newHead = dummy->next;
    delete dummy; // Clean up the dummy node
    return newHead;
        
        
        
        
        
        
        
        
        
    }
};