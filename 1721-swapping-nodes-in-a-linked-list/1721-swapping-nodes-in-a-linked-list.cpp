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
    ListNode* swapNodes(ListNode* head, int k) {

        if(head==NULL || head->next==NULL)
        return head;
        if(head->next->next==NULL){
            ListNode* k=head;
            head=head->next;
            head->next=k;
            k->next=NULL;
            return head;
        }
        
        int o=0;
        ListNode* temp8=head;
        while(temp8!=NULL){
            temp8=temp8->next;
            o++;
        }


        ListNode* temp=head;
        ListNode* temp1=head;
        
      ListNode* curr1=NULL;
      ListNode* curr2=head;
      ListNode* prev1=NULL;
      ListNode* prev2=NULL;
      ListNode* next1=NULL;
      ListNode* next2=NULL;

      for(int i=1;i<k;i++){
        prev1=temp;
        temp=temp->next;
       
        
      }
      curr1=temp;
      next1=temp->next;


      for(int i=0;i<o-k;i++){
         prev2 = curr2;
         curr2 = curr2->next;
      }
        
        next2=curr2->next;

        if (curr1 == curr2)
        return head;

        // if(curr1->next==curr2){
        //     if(prev1==NULL){
        //     head=curr2;
        //     curr2->next = curr1;
        //     curr1->next = next2;
        //     }
        //     else{
        //     prev1->next=curr2;
        //     curr2->next=curr1;
        //     curr1->next=next2;
        //     }
        // }
        // else if(curr2->next==curr1){
        //      if(prev1==NULL){
        //     head=curr1;
        //     curr1->next = curr2;
        //     curr2->next = next1;
        //      }
        //     else{
        //     prev2->next=curr1;
        //     curr1->next=curr2;
        //     curr2->next=next1;
        //     }
        // }

        // else{
        //  if(prev2 == NULL)
        // head = curr1;
        //  else
        // prev2->next = curr1;

        // if(prev1 == NULL)
        // head = curr2;
        //  else
        // prev1->next = curr2;

        // curr2->next=next1;
        // curr1->next=next2;
        // }
        swap(curr1->val,curr2->val);
        return head;
    }
};