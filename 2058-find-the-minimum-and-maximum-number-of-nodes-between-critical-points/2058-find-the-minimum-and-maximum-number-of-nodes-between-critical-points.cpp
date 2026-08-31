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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>maxi;
        vector<int>mini;
        vector<int>dis;
        ListNode*  prev=NULL;
        ListNode* nxt=NULL;
        ListNode* temp=head;
        int i=0;
        while(temp->next->next!=NULL){
            i++;
            prev=temp;
            temp=temp->next;
            nxt=temp->next;

            if(temp->val<prev->val && temp->val <nxt->val){
                mini.push_back(i);
            }
            else if(temp->val>prev->val && temp->val >nxt->val){
                maxi.push_back(i);
            }
           
        }
        if(mini.size()+ maxi.size()<2){
            dis.push_back(-1);
            dis.push_back(-1);

            return dis;
        }
        
        
            for(int i=0;i<maxi.size();i++){
                mini.push_back(maxi[i]);
            }
            sort(mini.begin(),mini.end());
            int minn=INT_MAX;
            for(int i=0;i<mini.size()-1;i++){
                int x=mini[i+1]-mini[i];
                minn=min(minn,x);

            }
            int maxx=mini.back()-mini.front();
            dis.push_back(minn);
            dis.push_back(maxx);


        return dis;
    }
};