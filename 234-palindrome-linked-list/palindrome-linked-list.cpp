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

ListNode* reverse(ListNode* slow)
{
ListNode * prev=nullptr;
        ListNode * current= slow;
         ListNode * next;
         while(current != nullptr)
         {
            next=current->next;
            current->next= prev;
            prev=current;
            current=next;
         }
         return prev;
}
class Solution {
public:
    bool isPalindrome(ListNode* head) {
      

    // --------------------optimal  --- in place reversing half LL and then comapring first and second half and then restoring the original
    if( head == nullptr || head->next== nullptr ) return head;
     ListNode* slow=head;
      ListNode * fast=head;
      while(fast != nullptr && fast->next != nullptr) {
        slow=slow->next;
        fast= fast->next->next;
      }
       
       ListNode* newhead= reverse(slow);
         while(newhead != nullptr)
         {
            if(newhead->val != head->val) {   reverse(newhead) ; return false;}
           newhead=newhead->next ;
            head=head->next;
         
        

    }
     reverse(newhead);
         return true;
};
};