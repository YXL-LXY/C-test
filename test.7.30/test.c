#define _CRT_SECURE_NO_WARNINGS 1



//struct ListNode* removeElements(struct ListNode* head, int val) {
//    while (head != NULL && head->val == val) {
//        head = head->next;
//    }
//
//    if (head == NULL) {
//        return NULL;
//    }
//
//    struct ListNode* pre = head;
//    while (pre->next != NULL) {
//        /* �ҵ�ֵΪ val �Ľڵ㣬������ɾ�� */
//        if (pre->next->val == val) {
//            pre->next = pre->next->next;
//        }
//        else {
//            /* û�ҵ���������������� */
//            pre = pre->next;
//        }
//    }
//    return head;
//}

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = NULL, * pre = head;
        while (pre != NULL) {
            ListNode* t = pre->next;
            pre->next = cur;
            cur = pre;
            pre = t;
        }
        return cur;
    }
};

