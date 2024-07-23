class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> aray;
        int space = size(nums);
        for(int i=0; i < space; i++)
        {
            for(int j = i+1; j < space; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    aray.push_back(i);
                    aray.push_back(j);
                    return aray;

                }
            }
        }
        return aray;
    }
};