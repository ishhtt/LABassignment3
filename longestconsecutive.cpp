class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
    int longest = 0;

    for (int num : nums) {
        if (numSet.find(num - 1) == numSet.end()) {
            int currentNum = num, currentStreak = 1;

            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum++;
                currentStreak++;
            }

            longest = max(longest, currentStreak);
        }
    }

    return longest;
    }
};
