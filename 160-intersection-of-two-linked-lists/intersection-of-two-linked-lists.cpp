/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*>os;

        while(headA !=NULL){
            os.insert(headA);
            headA=headA->next;
        }

        while(headB!=NULL){
            if(os.find(headB)!=os.end()){
                return headB;
            }
            headB=headB->next;
        }

        return NULL;
        
    }
};