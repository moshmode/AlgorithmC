//
// Created by 22057 on 2021/11/1.
//

#include "e575.h"

int E575::distributeCandies(vector<int> &candyType) {
    return min(unordered_set<int>(candyType.begin(), candyType.end()).size(), candyType.size() / 2);
}
