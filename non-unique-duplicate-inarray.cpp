#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> find(const vector<int>& nums) {
    unordered_map<int, int> count;
    vector<int> duplicates;

    for (int num : nums) {
        count[num]++;
    }

    for (const auto& pair : count) {
        if (pair.second > 1) {
            duplicates.push_back(pair.first);
        }
    }

    return duplicates;
}

int main() {
    vector<int> nums = {2, 3, 1, 4, 2, 4, 2};
    vector<int> nonUniqueDuplicates = find(nums);

    if (!nonUniqueDuplicates.empty()) {
        cout << "Non-unique duplicates found:";
        for (int num : nonUniqueDuplicates) {
            cout << " " << num;
        }
        cout << endl;
    } else {
        cout << "No non-unique duplicates found." << endl;
    }

    return 0;
}
