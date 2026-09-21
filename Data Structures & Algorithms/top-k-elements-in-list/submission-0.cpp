class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Count frequency of each number
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        int n = nums.size();

        // Step 2: Bucket numbers by their frequency
        vector<vector<int>> buckets(n + 1);

        for (auto& [num, frequency] : freq) {
            buckets[frequency].push_back(num);
        }

        // Step 3: Collect the k most frequent numbers
        vector<int> result;

        for (int frequency = n; frequency >= 1; frequency--) {
            for (int num : buckets[frequency]) {
                result.push_back(num);

                if (result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};