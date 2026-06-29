/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp->val = 0;
    temp->next = NULL;
    struct ListNode* curr = temp;
    int carry = 0;
    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry;
        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }
        carry = sum / 10;
        struct ListNode* new = (struct ListNode*)malloc(sizeof(struct ListNode));
        new->val = sum % 10;
        new->next = NULL;
        curr->next = new;
        curr = curr->next;
    }
    struct ListNode* result = temp->next;
    free(temp);
    return result;
}
