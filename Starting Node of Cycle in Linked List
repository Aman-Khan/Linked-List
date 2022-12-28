    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(slow!=NULL && fast!=NULL){
            slow = slow->next;
            fast = fast->next;
            if(fast==NULL) return NULL;
            fast=fast->next;
            if(slow==fast) break;
        }
        slow = head;
        if(fast==NULL) return NULL;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
