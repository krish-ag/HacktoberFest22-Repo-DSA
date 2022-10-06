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
    ListNode* mergeKLists(vector<ListNode*>& v1) {
       vector<int> v;
        for(int i =0;i<v1.size();i++){
            while(v1[i]!=NULL){
                v.push_back(v1[i]->val);
                    v1[i]=v1[i]->next;
            }
        }
        sort(v.begin(),v.end());
        int n = v.size();
        ListNode* head = new ListNode(0);
        ListNode* p = head;
        for(int i =0;i<n;i++){
            ListNode* t = new ListNode(v[i]);
            p->next = t;
            p = t;
        }
        return head->next;
    }
};
