class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *prev = NULL ;
        Node *next ;
        
        while(head){
            next = head->next;
            head->next=prev;
            prev = head;
            head = next;
        }
        
        return prev;
    }
    
};