class Solution {
public:
    int size(ListNode* head)
    {
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
       ListNode *temp = head;
       int sz = size(head);
       for(int i=1;i<=sz/2;i++)
       {
        temp = temp->next;
       } 
       return temp;
    }
};