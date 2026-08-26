class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>v;
        ListNode *temp = head;
        while(temp != NULL)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> v2;
        v2 = v;
        reverse(v2.begin(),v2.end());
        if(v == v2)
           return true;
        else
           return false;
    }
};