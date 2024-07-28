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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         auto compare = [](ListNode* a, ListNode* b) {
            return a->val > b->val;
        };

        // Priority queue to maintain the current smallest element at the top
        priority_queue<ListNode*, vector<ListNode*>, decltype(compare)> pq(compare);

        // Push the head of each list into the priority queue
        for (ListNode* list : lists) {
            if (list) {
                pq.push(list);
            }
    }
         ListNode* dummy = new ListNode();
        ListNode* current = dummy;

        // Extract the smallest element and add the next element of that list to the priority queue
        while (!pq.empty()) {
            ListNode* smallest = pq.top();
            pq.pop();
            current->next = smallest;
            current = current->next;
            if (smallest->next) {
                pq.push(smallest->next);
            }
        }

        return dummy->next;
    }
};