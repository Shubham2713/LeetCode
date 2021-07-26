//OPTIMIZED
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
        ListNode* slow=head;ListNode* fast=head;
        
        
        while(n--)
        {
            fast=fast->next;
        }
        
        if(fast==NULL)
            return head->next;
        while(fast->next)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        
        return head;
        
    }
};



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
    int size(ListNode* head)
    {
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        //cout<<c;
        return c;    
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz=size(head);
        int step=sz-n-1;
        if(sz==1)
            return NULL;
        if(n==sz)
            return head->next;
        ListNode* temp=head;
        
        while(step>0)
        {
            step--;
            temp=temp->next;
        }
        
        if(temp->next!=NULL)
            temp->next=temp->next->next;
        else
            temp->next=NULL;
        
        return head;
        
    }
};
