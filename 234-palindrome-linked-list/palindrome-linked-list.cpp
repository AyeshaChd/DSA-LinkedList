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
    bool isPalindrome(ListNode* head) {
        // ----------Brute force
    //     ListNode* head2= nullptr;
    //     ListNode* temp=head; 
    //     while(temp)
    //     {
    //         head2 =  new ListNode(temp->val, head2); 
    //         temp=temp->next;
    //     }
    //  while(head2 )
    //  {
    //     if(head->val != head2->val) return  false;
    //     head= head->next;
    //     head2=head2->next;

    //  }
    //  return true;

    // --------------------optimal  --- in place reversing half LL and then comapring first and second half
    if( head == nullptr || head->next== nullptr ) return head;
     ListNode* slow=head;
      ListNode * fast=head;
      while(fast != nullptr && fast->next != nullptr) {
        slow=slow->next;
        fast= fast->next->next;
      }
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
         while(prev != nullptr)
         {
            if(prev->val != head->val) return false;
            prev=prev->next ;
            head=head->next;
         }
         return true;

    }
};