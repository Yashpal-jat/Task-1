#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(const vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for(int j=i+1;j<n;j++)

        if (nums[i]==nums[j]) {
            return 1;
            break;
        }

    }

    return -1;
}

int main() {
    vector<int> nums = {2, 3, 1, 4, 2,1};
    int duplicate = findDuplicate(nums);

    if (duplicate != -1) {
        cout << "Duplicate found" << endl;
    } else {
        cout << "No duplicate found." << endl;
    }

    return 0;
}

