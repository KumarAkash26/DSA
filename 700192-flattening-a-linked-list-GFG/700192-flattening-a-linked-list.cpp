/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
};*/

class Solution {
  public:
  
    Node*merge(Node*head1, Node*head2)
    {
        Node *head = new Node(0);
        Node*tail = head;
        
        while(head1 && head2)
        {
            if(head1 -> data <= head2 -> data)
            {
                tail -> bottom = head1;
                head1 = head1 -> bottom;
                
            }
            else
            {
                tail -> bottom = head2;
                head2 = head2 -> bottom;
                
            }
            
            tail = tail -> bottom;
            tail -> bottom = NULL;
        }
        if(head1)
        tail -> bottom = head1;
        else
        tail -> bottom = head2;
        
        return head -> bottom;
    }
  
    Node* flatten(Node* head) {
        // code here
        Node *head1, *head2, *head3;
        
        if (!head || !head->next)
        return head;
        
        while(head->next)
        {
            head1 = head;
            head2 = head -> next;
            head3 = head -> next -> next;
            
            head1 -> next = NULL;
            head2 -> next = NULL;
            
            head = merge(head1, head2);
            
            head -> next = head3;
            
            
        };
        
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna