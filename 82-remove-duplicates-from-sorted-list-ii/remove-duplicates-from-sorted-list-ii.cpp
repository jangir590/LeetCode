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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode*temp=head;
        ListNode*prev=NULL;
        while(temp!=nullptr){
            if(temp->next!=nullptr && temp->val==temp->next->val){
                int num = temp->val;
                while(temp!=nullptr && temp->val==num){
                    temp=temp->next;
                }
                if(prev) prev->next=temp;
                else head=temp;

            }
            else{
                prev=temp;
                temp=temp->next;
            }
        }
        return head;

        
    }
};