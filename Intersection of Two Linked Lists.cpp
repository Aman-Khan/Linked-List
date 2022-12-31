int traverse(ListNode* head){
        if(head==NULL) return 0;
        int l = traverse(head->next);
        return l+1;
    }
    ListNode* getInterSection(ListNode* headA, ListNode* headB){
        if(headA==NULL || headB==NULL) return NULL;
        if(headA==headB) return headA;
        return getInterSection(headA->next, headB->next);
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = traverse(headA);
        int l2 = traverse(headB);
        if(l1>l2){
            while(l1!=l2){
                headA=headA->next;
                l1--;
            }
        }
        else if(l2>l1){
            while(l2!=l1){
                headB=headB->next;
                l2--;
            }
        }
        return getI
