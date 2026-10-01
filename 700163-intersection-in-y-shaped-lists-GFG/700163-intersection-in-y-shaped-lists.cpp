/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  code here
        // Node*curr1 = head1, *curr2 = head2;
        
        // int count1 = 0, count2 = 0;
        
        // while(curr1)
        // {
        //     count1++;
        //     curr1 = curr1 -> next;
        // }
        
        // while(curr2)
        // {
        //     count2++;
        //     curr2 = curr2 -> next;
        // }
        
        // curr1 = head1, curr2 = head2;
        
        // while(count1>count2)
        // {
        //     curr1 = curr1 -> next;
        //     count1--;
        // }
        
        // while(count1<count2)
        // {
        //     curr2 = curr2 -> next;
        //     count2--;
        // }
        
        // while(curr1 != curr2)
        // {
        //     curr1 = curr1->next;
        //     curr2 = curr2->next;
        // }
        
        // if(!curr1)
        // {
        //     return NULL;
        // }
        
        // return curr1;
        
        
        Node*curr1 = head1;
        
        while(curr1 -> next)
        {
            curr1 = curr1 -> next;
        };
        
        curr1 -> next = head1;
        
        Node*slow = head2, *fast = head2;
        
        while(fast && fast -> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if(slow == fast)
            break;
        };
        
        if(!fast || !fast -> next)
        return NULL;
        
        slow = head2;
        while(slow!=fast)
        {
            slow = slow -> next;
            fast = fast -> next;
        };
        
        return slow;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna