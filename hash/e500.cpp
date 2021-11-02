//
// Created by 22057 on 2021/11/1.
//

#include "e500.h"


vector<string> E500::findWords(vector<string> &words){

    string s1 = "qwertyuiopQWERTYUIOP";
    string s2 = "asdfghjklASDFGHJKL";
    string s3 = "zxcvbnmZXCVBNM";
    unordered_set<int> sets[3];
    vector<string> ans;

    for (char i: s1) {
        sets[0].insert(i);
    }
    for (char i: s2) {
        sets[1].insert(i);
    }
    for (char i: s3) {
        sets[2].insert(i);
    }

    for (const string &item: words) {
        int x = 0;
        int flag = 1;
        for (const unordered_set<int> &set: sets) {
            if (set.count(item[0])) {
                break;
            }
            x++;
        }
        for (char i: item) {
            if (!sets[x].count(i)) {
                flag = 0;
            }
        }
        if (flag) {
            ans.push_back(item);
        }

    }
    return ans;
}
