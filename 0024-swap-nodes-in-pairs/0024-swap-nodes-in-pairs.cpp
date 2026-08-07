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
    ListNode* swapPairs(ListNode* head) {
         if (head == NULL || head->next == NULL)
         return head;
        ListNode* prev=NULL;
        ListNode* curr1=head;
        ListNode* curr2=head->next;
        ListNode* nxt=NULL;
        
        

        while(curr1!=NULL && curr2!=NULL){
            nxt=curr2->next;
            curr2->next=curr1;
            curr1->next=nxt;
            if (prev != NULL)
            prev->next = curr2;
            else
            head = curr2;

            prev=curr2->next;
            curr1=nxt;
            if(curr1!=NULL)
            curr2=curr1->next;
            else
            curr2=NULL;
           
            
            
         
        }
        return head;
    }
};