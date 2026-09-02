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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode * dumm=new ListNode(0,head);
       ListNode *slow=dumm;
       ListNode *fast=dumm;
       for(int i =0;i<=n;i++){
        fast=fast->next;
       }
       while(fast !=nullptr){
        slow=slow->next;
        fast=fast->next;
       }

       ListNode * nodedlt=slow->next;
       slow->next=slow->next->next;
       delete nodedlt;
       ListNode *newhead=dumm->next;
       delete dumm;
       return  newhead;




        
    }
};
