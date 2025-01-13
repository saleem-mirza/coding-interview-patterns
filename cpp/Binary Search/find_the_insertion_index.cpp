#include <vector>

int findTheInsertionIndex(std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size();
    while (left < right) {
        int mid = (left + right) / 2;
        // If the midpoint value is greater than or equal to the target,
        // the lower bound is either at the midpoint, or to its left.
        if (nums[mid] >= target) {
            right = mid;
        }
        // The midpoint value is less than the target, indicating the
        // lower bound is somewhere to the right.
        else {
            left = mid + 1;
        }
    }
    return left;
}