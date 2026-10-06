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
        
    //     while(temp)
    //     {
    //         tailCopy -> random = Find(head, headCopy, temp -> random);
    //         tailCopy = tailCopy -> next;
    //         temp = temp -> next;
    //     }
    //     return headCopy;0
        unordered_map<Node*, Node*>m;
        
        while(temp)
        {
            m[temp] = tailCopy;
            temp = temp -> next;
            tailCopy = tailCopy -> next;
        };
        
        tailCopy = headCopy;
        temp = head;
        
        while(temp)
        {
            tailCopy -> random = m[temp -> random];
            tailCopy = tailCopy -> next;
            temp = temp -> next;
        };
        
        return headCopy;
    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna