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

        //step 1 create a clone ll using next pointer
        Node* clonehead=NULL;
        Node* clonetail=NULL;

        Node* temp=head;
        while(temp!=NULL){
            insertattail(clonehead,clonetail,temp->val);
            temp=temp->next;
        }
        //step 2
        unordered_map<Node*,Node*>oldtonewnode;
        Node* originalnode=head;
        Node* clonenode=clonehead;

        while(originalnode!=NULL && clonenode!=NULL){
            oldtonewnode[originalnode]=clonenode;
            originalnode=originalnode->next;
            clonenode=clonenode->next;
        } 

        originalnode=head;
        clonenode=clonehead;

        while(originalnode!=NULL){
            clonenode->random=oldtonewnode[originalnode->random];
            originalnode=originalnode->next;
            clonenode=clonenode->next;
        }

        return clonehead;
    }
};