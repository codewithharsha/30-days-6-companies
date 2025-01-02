class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> nums;
        for(int i=1;i<=n;i++)nums.push_back(i);

        int curr = 0;
        while(nums.size() > 1){
            int idx = (curr + (k-1))%nums.size();
            nums.erase(nums.begin()+idx);
            curr = idx;
        }
        return nums[0];
    }
};
