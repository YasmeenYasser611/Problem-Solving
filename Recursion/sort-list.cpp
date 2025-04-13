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
    ListNode* sortList(ListNode* head) 
    {
        if (head == nullptr || head->next == nullptr) 
        {
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast != nullptr && fast->next != nullptr) 
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* mid = slow->next;
        slow->next = nullptr;

        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);

       
        return merge(left, right);
    }

private:
    ListNode* merge(ListNode* left, ListNode* right) 
    {
        ListNode result(0);
        ListNode* tail = &result;
        while(left != nullptr && right != nullptr)
        {
            if(left-> val < right -> val)
            {
                tail-> next = left ;
                left= left->next;
            }
            else
            {
                tail-> next = right ;
                right = right-> next ;

            }
            tail = tail->next;
        }
        if(left != nullptr)
            tail->next = left;
        else
            tail->next = right;

        return result.next;



    }
};

