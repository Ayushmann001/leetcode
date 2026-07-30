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


//  class Solution {
//     void arrange(ListNode*& head, ListNode*& temp1){
//         if(head->next==NULL || head->next->next==NULL)
//         return;
        
//         ListNode* temp=head;
       
//         while(temp->next->next!=NULL){
//             temp=temp->next;
            
//         }
//         if( temp->next==temp1 || temp==temp1)
//         return ;
//         ListNode* nextt=NULL;
        
       
//         nextt=temp1->next;
//         temp1->next=temp->next;
//         temp->next=NULL;
//         temp1->next->next=nextt;
//         temp1=temp1->next->next;
        
//         arrange(head,temp1);
      

//     }
// public:
//     void reorderList(ListNode* head) {
//         ListNode* temp1=head;
//         arrange(head,temp1);
//     }
// };
class Solution {
    ListNode* getmid(ListNode* head){
        if(head->next==NULL)
        return head;
        if(head->next->next==NULL)
        return head->next;

        ListNode* slow=head;
        ListNode* fast=head->next;

        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL)
            fast=fast->next;
            slow=slow->next;
        }
        return slow;

    }
    ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;

            prev=curr;
            curr=next;
        }
        return prev;
    }
    void arrange(ListNode* head){
        ListNode* mid=getmid(head);
        ListNode* temp=mid->next;

        temp=reverse(temp);
        mid->next=NULL;

        ListNode* temp1=head;
        while(temp!=NULL){
            ListNode* next=temp->next;
            ListNode* next2=temp1->next;

            temp1->next=temp;
            temp->next=next2;

           
          temp1=next2;
          temp=next;
        }
    }
public:
    void reorderList(ListNode* head) {
        arrange(head);
    }
};