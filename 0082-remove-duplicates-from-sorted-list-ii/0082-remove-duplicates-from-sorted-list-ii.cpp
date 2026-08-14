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
    void insert(ListNode* &nhead,ListNode* &ntail,int value){
        ListNode* temp=new ListNode(value);
        if(nhead==NULL){
            nhead=temp;
            ntail=temp;
            return;
        }
        else{
            ntail->next=temp;
            ntail=temp;
        }
    }
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
        return NULL;
        if(head->next==NULL)
        return head;
        ListNode* nhead=NULL;
        ListNode* temp=head;
        ListNode* ntail=NULL;
        int value=0;
        while(temp->next!=NULL){
            if(temp->val!=temp->next->val){
                insert(nhead,ntail,temp->val);
                temp=temp->next;
            }
            else if(temp->val==temp->next->val){
                value=temp->val;
                while( temp->next!=NULL && temp->val==value ){
                    temp=temp->next;
                }
            }
        }
        if(temp->val!=value)
        insert(nhead,ntail,temp->val);

        return nhead;

    }
};