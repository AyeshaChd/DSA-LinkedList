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
    ListNode* middleNode(ListNode* head) {
        // ---------Brute force----
    //   ListNode* temp=head;
    //   int count=0;
    //   if(head == nullptr || head->next==nullptr) return head;
    //   while(temp != nullptr)
    //   {
    //     count++;
    //     temp=temp->next;
    //   }

    //   int middle=count/2 + 1;
    //   temp=head;
    //   count=0;
    //    while(temp != nullptr)
    //   {
    //     count++;
    //     if(count == middle) return temp;
    //     temp=temp->next;
    //   }
    //   return nullptr;
    // ------------optimal
     if (head== nullptr || head->next== nullptr) return head;
       ListNode* slow=head; ListNode* fast=head;
       while(fast != nullptr && fast->next != nullptr)
       {
        slow= slow->next;
        fast=fast->next->next;
       }
       return slow;
    }
    
};