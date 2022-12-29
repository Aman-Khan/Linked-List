Node* merge(Node* head1, Node* head2){
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
    
    Node* ans = new Node(-1);
    Node* tail = ans;
    while(head1!=NULL && head2!=NULL){
        if(head1->data<head2->data){
            tail->bottom = head1;
            tail=head1;
            head1=head1->bottom;
        }
        else{
            tail->bottom = head2;
            tail=head2;
            head2=head2->bottom;
        }
    }
    if(head2!=NULL){
        tail->bottom = head2;
    }
    if(head1!=NULL){
        tail->bottom = head1;
    }
    return ans->bottom;
}    

Node* flat(Node* root){
    if(root->next==NULL){
        return root;
    }
    
    Node* pre = root;
    Node* forw = flat(root->next);
    root->next = NULL;
    Node* res = merge(pre, forw);
    return res;
}

Node *flatten(Node *root)
{
    Node* flatted = flat(root);
    return flatted;
}
