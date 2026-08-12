/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        //     ListNode *temp1=NULL;
        //     ListNode *temp2=headA;
        //     ListNode *temp3=headB;
        //     ListNode *temp4=NULL;
           
        //     int n=0;
        //     int m=0;
        //     int k=0;
        //     while(temp2!=NULL){
               
        //         n++;
        //         temp2=temp2->next;
        //     }

        //     while(temp3!=NULL){
        //         m++;
        //         temp3=temp3->next;
        //     }
        //     if(n==m){
        //         while(headA!=headB){
        //             headA=headA->next;
        //             headB=headB->next;
        //         }
        //         temp1=headA;
        //     }
        //     else if(n>m){
        //         k=n-m;
        //         temp1=headA;
        //         for(int i=0;i<k;i++){
        //             temp1=temp1->next;
        //         }
        //         headA=temp1;
        //          while(headA!=headB){
        //             headA=headA->next;
        //             headB=headB->next;
        //         }
                
        //     }
        //     else{
        //         k=m-n;
        //         temp1=headB;
        //         for(int i=0;i<k;i++){
        //             temp1=temp1->next;
        //         }
        //         headB=temp1;
        //          while(headA!=headB){
        //             headA=headA->next;
        //             headB=headB->next;
        //         }
                
        //     }
           

        // return headA;

        
       
      ListNode *a=headA;
      ListNode *b=headB;


      while(a!=b){
        a=a->next;
        b=b->next;

        if(a==b) 
        return a;
        if(a==NULL) 
        a=headB;
        if(b==NULL)
        b=headA;
      }

      return a;


    }
};