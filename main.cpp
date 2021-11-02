#include <iostream>
#include "hash/e575.h"

int main() {

    E575 e;
    vector<int> target;
    target.push_back(1);
    target.push_back(1);
    target.push_back(2);
    target.push_back(2);
    target.push_back(3);
    target.push_back(3);

    cout << e.distributeCandies(target) << endl;
    return 0;
}
