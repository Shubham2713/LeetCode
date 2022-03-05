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
        if(head==NULL)
            return head;
        vector<int> arr;
        ListNode* temp=head;
        unordered_map<int,int> mp;
        while(temp)
        {
            arr.push_back(temp->val);
            mp[temp->val]++;
            temp=temp->next;
           
        }
        vector<int > unique;
        for(int i=0;i<arr.size();i++ )
        {
            if(mp[arr[i]]==1)
                unique.push_back(arr[i]);
            
        }
        if(unique.size()==0)
            return NULL;
        ListNode* newHead= new ListNode(unique[0]);
        ListNode* ret = newHead;
        for(int i=1;i<unique.size();i++)
        {
            ListNode* curr=new ListNode(unique[i]);
            newHead->next=curr;
            newHead=newHead->next;
            
        }
        return ret;
    }
};
