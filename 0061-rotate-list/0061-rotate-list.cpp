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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL )
        return NULL;
        if(head->next==NULL)
        return head;
       


        ListNode* temp=head;
        int m=0;
        while(temp!=NULL){
            temp=temp->next;
            m++;
        }
        temp=head;
        ListNode* prev=NULL;
        k=k%m;
         if(k==0)
        return head;
        
        for(int i=0;i<m-k;i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;

        ListNode* temp2=temp;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=head;
        head=temp;

        return head;
    }
};