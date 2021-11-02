//
// Created by 22057 on 2021/11/2.
//

#include "e237.h"

void E237::deleteNode(ListNode *node) {
    node->val = node->next->val;
    node->next = node->next->next;
}
