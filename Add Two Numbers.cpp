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
    ListNode *last=nullptr;
  void add(int v)
    {
       ListNode *t=new ListNode;
       t->val=v;
      t->next=nullptr;
      last->next=t;
      last=t;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
        int carry=0;
          ListNode *l3=nullptr;
      l3=new ListNode;
        
        l3->val=l1->val+l2->val+carry;
        if(l3->val>=10)
        {
            l3->val=l3->val%10;
            carry=1;
        }
       
        l3->next=nullptr;
        last=l3;
        l2=l2->next;
        l1=l1->next;
        while(l1!=nullptr&&l2!=nullptr)
        {
            int sum=l1->val+l2->val+carry;
            if(sum>=10)
            {
                add(sum%10);
                carry=1;
            }
            else
            {
                add(sum);
                    carry=0;
            }
            l1=l1->next;
            l2=l2->next;
        }
        
      while(l1!=nullptr)
      {
          int sum=l1->val+carry;
          if(sum>9)
          {
              add(sum%10);
              carry=1;
          }
          else
          {
              add(sum);
              carry=0;
          }
          l1=l1->next;
              
      }
         while(l2!=nullptr)
      {
           int sum=l2->val+carry;
          if(sum>9)
          {
              add(sum%10);
              carry=1;
          }
          else
          {
              add(sum);
              carry=0;
          }
          l2=l2->next;
              
      }
        if(carry!=0)
        {
            add(1);
        }
        
        return l3;
    }
};
