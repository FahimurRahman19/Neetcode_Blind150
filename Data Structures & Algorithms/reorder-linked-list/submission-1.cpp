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
    void reorderList(ListNode* head) {
        ListNode *fast=head;
        ListNode *slow=head;
      
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode * second=slow->next;
        slow->next=nullptr;
        ListNode * prev=nullptr;

        while(second){
            ListNode * next=second->next;
            second->next=prev;
            prev=second;
            second=next;




        }

        ListNode * first=head;
        second=prev;
         while(second){
            ListNode *t1=first->next;
            ListNode *t2=second->next;


             

             first->next=second;
             second->next=t1;
             second=t2;
             first=t1;
             



         }
        




        






        
        
    }
};
