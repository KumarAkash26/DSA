# [Detect Loop in Linked List](https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab)
## Medium
Given a singly linked list, find if the given linked list contains a loop or not.&nbsp;A loop exists in a linked list if the next pointer of the last node points to any other node in the list (including itself), rather than being null.Note:&nbsp;Internally, pos(1 based index) is used to denote the position of the node that tail's next pointer is connected to. If pos = 0, it means the last node points to null. Note that pos is not passed as a parameter.Examples:Input: pos = 2,   Output: true
Explanation: There exists a loop as last node is connected back to the second node.Input: pos = 0, &nbsp; Output: false
Explanation: There exists no loop in given linked list.Input: pos = 1,   Output: true
Explanation: There exists a loop as last node is connected back to the first node.