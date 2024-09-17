#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums = { 7,4,2,3,5,0,1 };
    int missingnum = 0;
    for (int i = 0; i <= nums.size(); i++) {
        missingnum ^= i;
    }

    for (int num : nums) {
        missingnum ^= num;
    }
    cout << missingnum;
}

