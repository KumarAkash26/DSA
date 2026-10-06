/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = random = nullptr;
    }
};*/

class Solution {
    
  public:
//   Node* Find(Node* curr1, Node* curr2, Node* x)
//     {
//         if(x==NULL)
//         return NULL;
        
//         while(curr1!=x){
//             curr1 = curr1->next;
//             curr2 = curr2-> next;
//         }
//         return curr2;
//     };
  
    Node* cloneLinkedList(Node* head) {
        // code here
        Node*headCopy = new Node(0);
        Node*tailCopy = headCopy;
        Node*temp = head;
        
        while(temp)
        {
            tailCopy -> next = new Node(temp -> data);
            tailCopy = tailCopy -> next;
            temp = temp -> next;
        }
        
        tailCopy = headCopy;
        headCopy = headCopy -> next;
        delete tailCopy;
        
        tailCopy = headCopy;
        temp = head;
        
        
        Node* curr1 = head, *curr2 = headCopy;
        Node*front1, *front2;
        
        while(curr1)
        {
            front1 = curr1 -> next;
            front2 = curr2 -> next;
            
            curr1 -> next = curr2;
            curr2 -> next = front1;
            
            curr1 = front1;
            curr2 = front2;
        }
        
        //assign random pointer to cloned ll
        
        curr1 = head;
        while(curr1)
        {
            curr2 = curr1 -> next;
            if(curr1 -> random)
            
            curr2 -> random = curr1 -> random -> next;
            
            curr1 = curr2 -> next;
            
            
        }
        
        //break the ll
        
        curr1 = head;
        while(curr1 -> next)
        {
            front1 = curr1 -> next;
            curr1 -> next = front1 -> next;
            curr1 = front1;
        }
        
        return headCopy;
        
        
    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna