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
        if(head==nullptr || head->next==nullptr)return head;
        ListNode*temp=head;
        while(temp!=nullptr && temp->next!=nullptr){
            ListNode*front=temp->next;
            while(front!=nullptr && front->val==temp->val){
                ListNode*duplicate=front;
                front=front->next;
                delete duplicate;
            }
            temp->next=front;
            temp=temp->next;
        }
        return head;
        
    }
};