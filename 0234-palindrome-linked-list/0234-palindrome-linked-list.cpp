/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
       /*  if(head->next==NULL)
        return 1;

        ListNode*temp = head;
        int count = 0;

        while(temp)
        {
            temp = temp -> next;
            count++;
        }
        count/=2;

        ListNode*curr = head, *prev = NULL;
        while(count--)
        {
            prev = curr;
            curr = curr->next;
        }

        prev -> next = NULL;

        ListNode*fut = NULL;
        prev = NULL;

        while(curr)
        {
            fut = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = fut;
        }

        ListNode*head1 = head, *head2 = prev;
        while(head1)
        {
            if(head1->val != head2->val)
            return 0;

            head1 = head1->next;
            head2 = head2->next;
        }
        return 1;
    } */
    

   /*  if(head -> next == NULL)
    return 1; */

    ListNode*temp = head;

    vector<int>arr;

    while(temp)
    {
        arr.push_back(temp->val);
        temp = temp -> next;
    }

    

    int i = 0, j = arr.size()-1;

    while(i<=j)
    {
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else{
            return 0;
        }
    }
    return 1;
    
    }
};