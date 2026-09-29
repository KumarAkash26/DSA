/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // code here
        // vector<int>ans;
        // ans.push_back(head -> data);
        // Node *curr = head -> next;
        
        // while(curr)
        // {
        //     if(ans[ans.size()-1]!= curr -> data)
        //     ans.push_back(curr -> data);
        //     curr = curr -> next;
        // }
        // curr = head;
        // int index = 0;
    
        
        // while(index<ans.size())
        // {
        //     curr -> data = ans[index];
        //     index++;
        //     curr = curr -> next;
        // }
        // int size = ans.size()-1;
        // curr = head;
        // while(size--)
        // curr = curr -> next;
        
        // curr -> next = NULL;
        
        // return head;
        
        if(!head || !head -> next)
        return head;
        
        Node* curr = head -> next,
        *prev = head;
        
        while(curr)
        {
            if(curr -> data == prev -> data)
            {
                prev -> next = curr -> next;
                delete curr;
                
                curr = prev -> next;
            }
            else
            {
                prev = prev -> next;
                curr = curr -> next;
            }
        }
        return head;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna