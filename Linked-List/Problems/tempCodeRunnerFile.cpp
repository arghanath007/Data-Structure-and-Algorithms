node* removeDupes(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* temp=head;
    while(temp)
    {
        while(temp && temp->data == temp->next->data)
        {
            temp->next=temp->next->next;
        }
        temp=temp->next;
    }
    return head;
}