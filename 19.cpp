class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *h = head;
        int l = 0;
        while (h != NULL) {
            h = h->next;
            l++;
        }
        if (l - n == 0) {
            return head->next;
        }
        if (l == 1) {
            return NULL;
        }
        h = head;
        ListNode *h2 = (h->next)->next;
        if (h2 == NULL) {
            if (n == 1) {
                head->next = NULL;
                return head;
            } else {
                return head->next;
            }
        }
        for (int i = 1; i < l - n; i++) {
            h = h->next;
            h2 = h2->next;
        }
        h->next = h2;
        return head;
    }
};
