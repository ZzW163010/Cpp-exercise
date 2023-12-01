 Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* deleteDuplication(ListNode* head) {
    if(head == NULL) return NULL;
    
    ListNode* dummy = new ListNode(-1);
    dummy->next = head;
    ListNode* p = head;
    ListNode* pp = dummy;
    ListNode* q = p->next;
    
    while(q != NULL)
    {
        int flag = 1;
        
        while(q != NULL && p->val == q->val)
        {
            q = q->next;
            flag = 0;
        }
        if(p->next != q)
        {
            pp->next = q;
            p = q;
        }
        else
        {
            pp = p;
            p = q;
        }
        
        if(q != NULL) q = q->next;
    }
    return dummy->next;
  }
};

class Solution {
public:
    ListNode* deleteDuplication(ListNode* head) {
    ListNode* dummy = new ListNode(-1);
    ListNode* p = dummy;
    dummy->next = head;
    
    while(p->next)
    {
        ListNode* q = p->next;
        
        while(q->next && p->next->val == q->next->val) q = q->next;
        if(p->next == q) p = q;
        else p->next = q->next;
    }
    return dummy->next;
  }
};
