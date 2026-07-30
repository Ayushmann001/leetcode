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
    void arrange(ListNode*& head, ListNode*& temp1){
        if(head->next==NULL || head->next->next==NULL)
        return;
        
        ListNode* temp=head;
       
        while(temp->next->next!=NULL){
            temp=temp->next;
            
        }
        if( temp->next==temp1 || temp==temp1)
        return ;
        ListNode* nextt=NULL;
        
       
        nextt=temp1->next;
        temp1->next=temp->next;
        temp->next=NULL;
        temp1->next->next=nextt;
        temp1=temp1->next->next;
        
        arrange(head,temp1);
      

    }
public:
    void reorderList(ListNode* head) {
        ListNode* temp1=head;
        arrange(head,temp1);
    }
};