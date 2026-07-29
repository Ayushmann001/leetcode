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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        if(size==1 && n==1){
            return NULL;
        }
        if(size-n==0){
            head=head->next;
            return head;
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        int i=1;
        while(i<=size-n){
           prev=curr;
            curr=curr->next;
            
            i++;
        }
        prev->next=curr->next;
        delete(curr);

        return head;
    }
};