//Approach 1
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode* prev = head;
        head = head->next;
        ListNode* forw = head->next;

        head->next = prev;
        prev->next = swapPairs(forw);
        return head;
    }


//Approach 2
    ListNode* reverse(ListNode* prev, ListNode* curr){
        if(!curr) return prev;
        if(curr->next==NULL){
            // curr->next = prev;
            ListNode* temp = new ListNode(prev->val);
            curr->next = temp;
            return curr;
        }
        ListNode* temp = curr->next;
        curr->next = prev;
        prev->next = reverse(temp, temp->next);
        return curr;
    }
    ListNode* swapPairs(ListNode* head) {
        if(!head) return head;

        ListNode* nHead = reverse(head, head->next);
        return nHead;

    }
