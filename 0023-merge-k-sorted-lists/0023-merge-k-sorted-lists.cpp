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
    ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
        ListNode *dummy = new ListNode(-1);
        ListNode *temp = dummy;
        if(A == NULL && B == NULL){
            return NULL;
        }
        if(A == NULL){
            return B;
        }
        if(B == NULL){
            return A;
        }
        while(A && B){
            if(A->val < B->val){
                temp->next = A;
                A = A->next;
                temp = temp->next;
            }
            else{
                temp->next = B;
                B = B->next;
                temp = temp->next;
            }
        }
        if(A != NULL){
            temp->next = A;
        }
        else if(B != NULL){
            temp->next = B;
        }
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int l = lists.size();
        int interval = 1;
        if(l==0)
        {
            return NULL;
        }

        while(interval < l)
        {
            for(int i=0;i<(l-interval);i+=interval*2)
            {
                lists[i] = mergeTwoLists(lists[i], lists[i+interval]);
            }
            interval *= 2;
        }

        return lists[0];
    }
};