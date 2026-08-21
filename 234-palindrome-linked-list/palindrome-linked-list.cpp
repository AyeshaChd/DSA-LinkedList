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
        
        ListNode* head2= nullptr;
        ListNode* temp=head; 
        while(temp)
        {
            head2 =  new ListNode(temp->val, head2); 
            temp=temp->next;
        }
     while(head2 )
     {
        if(head->val != head2->val) return  false;
        head= head->next;
        head2=head2->next;

     }
     return true;
    }
};