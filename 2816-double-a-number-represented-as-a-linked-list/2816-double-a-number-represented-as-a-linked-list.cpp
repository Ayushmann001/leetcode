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
    // void insert(ListNode* &head,ListNode* &tail,int val){
    //     ListNode* temp=new ListNode(val);
    //     if(head==NULL){
    //         head=temp;
    //         tail=temp;
    //         return;
    //     }
    //     else{
    //        tail->next=temp;
    //        tail=temp;
    //     }
    // }
    
   
   
    ListNode* multiply(ListNode* head){
        ListNode* temp1=head;
        ListNode* temp=NULL;
       
        
        int carry=0;
        while(temp1!=NULL){
            int x=temp1->val*2+carry;
            carry=x/10;
            int digit=x%10;
            temp1->val=digit;
            temp=temp1;
            temp1=temp1->next;
           

            
           
            

        }
        if(carry!=0){
          temp->next=new ListNode(carry);
        }

        return head;
    }
    ListNode* reverse(ListNode* &head){
        if(head->next==NULL)
        return head;
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
public:
    ListNode* doubleIt(ListNode* head) {

        head=reverse(head);
        head=multiply(head);
        head=reverse(head);

        return head;
    }
};