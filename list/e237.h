//
// Created by 22057 on 2021/11/2.
//

#ifndef ALGORITHM_E237_H
#define ALGORITHM_E237_H

#include<bits/stdc++.h>


struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};


class E237 {
public:
    void deleteNode(ListNode *node);
};


#endif //ALGORITHM_E237_H
