/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>> heap;
        for(int i=0;i<lists.size();++i){
            ListNode *p=lists[i];
            while(p!=NULL){
                heap.push(p->val);
                p=p->next;
            }
        }
        if(heap.empty()) return nullptr;
        ListNode*head=new ListNode(heap.top());heap.pop();
        ListNode*p=head,*q=head;
        while(!heap.empty()){
            q=new ListNode(heap.top());
            p->next=q;
            p=q;
            heap.pop();
        }
        return head;
        
    }
};