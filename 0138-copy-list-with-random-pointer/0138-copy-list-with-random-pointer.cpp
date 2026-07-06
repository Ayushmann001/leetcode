/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    void insertattail(Node* &head,Node* &tail,int d){
        Node* newnode=new Node(d);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
public:
    Node* copyRandomList(Node* head) {

        // //step 1 create a clone ll using next pointer
        // Node* clonehead=NULL;
        // Node* clonetail=NULL;

        // Node* temp=head;
        // while(temp!=NULL){
        //     insertattail(clonehead,clonetail,temp->val);
        //     temp=temp->next;
        // }
        // //step 2
        // unordered_map<Node*,Node*>oldtonewnode;
        // Node* originalnode=head;
        // Node* clonenode=clonehead;

        // while(originalnode!=NULL ){
        //     oldtonewnode[originalnode]=clonenode;
        //     originalnode=originalnode->next;
        //     clonenode=clonenode->next;
        // } 

        // originalnode=head;
        // clonenode=clonehead;

        // while(originalnode!=NULL){
        //     clonenode->random=oldtonewnode[originalnode->random];
        //     originalnode=originalnode->next;
        //     clonenode=clonenode->next;
        // }

        // return clonehead;


        Node* clonehead=NULL;
        Node* clonetail=NULL;

        Node* temp=head;
        while(temp!=NULL){
            insertattail(clonehead,clonetail,temp->val);
            temp=temp->next;
        }

        Node* originalnode=head;
        Node* clonenode=clonehead;

        while(originalnode!=NULL && clonenode!=NULL){
            Node* next = originalnode->next;
            originalnode->next=clonenode;
            originalnode=next;

            next=clonenode->next;
            clonenode->next=originalnode;
            clonenode=next;
        }

         temp=head;
        while(temp!=NULL){
            if(temp->next!=NULL){
                if(temp->random!=NULL){
                    temp->next->random=temp->random->next;
                }
                else{
                    temp->next->random=NULL;
                }
               
            }
             temp=temp->next->next;
          
        }


        originalnode=head;
        clonenode=clonehead;
        while(originalnode!=NULL && clonenode!=NULL){
            originalnode->next=clonenode->next;
            originalnode=originalnode->next;
            
             if(originalnode != NULL)
            clonenode->next=originalnode->next;
            clonenode=clonenode->next;
        }

        return clonehead;
    }
};