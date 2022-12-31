 ListNode* merge(ListNode* head1, ListNode* head2){
        if(head1==NULL) return head2;
        if(head2==NULL) return head1;
        ListNode* orig = new ListNode(-1);
        ListNode* tail = orig;
        while(head1!=NULL && head2!=NULL){
            if(head2->val<head1->val){
                tail->next = head2;
                head2=head2->next;
                tail = tail->next;
            }
            else{
                tail->next = head1;
                head1=head1->next;
                tail = tail->next;
            }
        }
        if(head1!=NULL){
            tail->next=head1;
        }
        if(head2!=NULL){
            tail->next=head2;
        }
        return orig->next;;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* sorted = NULL;
        for(auto i:lists){
            sorted = merge(sorted, i);
        }      
        return sorted;
    }
