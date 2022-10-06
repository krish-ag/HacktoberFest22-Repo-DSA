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
    ListNode* deleteDuplicates(ListNode* head) {
        // if(!head || !head->next){return head;}
        ListNode* p = new ListNode(0);
        ListNode* t = p;
        while(head!=NULL){
           if(head->next &&( head->val == head->next->val)){
               while(head->next &&( head->val == head->next->val)){
                   head = head->next;
               }
               head = head->next;
               t->next = head;
           }
            else{
                t->next = head;
                t = t->next;
                head = head->next;
            }
        }
        return p->next;
    }
};
