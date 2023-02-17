    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        while(head && head->next){
            if(head->next->val==head->val){
                while(head->next && head->next->val == head->val){
                    head=head->next;
                }
                tail->next=head->next;
            }
            else{
                tail->next = head;
                tail=tail->next;
            }
            head=head->next;
        }
        return dummy->next;
    }
