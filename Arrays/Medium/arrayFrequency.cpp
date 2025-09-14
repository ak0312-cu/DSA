class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        // Your code goes here
        map<int,int> mp;

        int n = nums.size();

        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }

        vector<vector<int>> res;

        for(auto it : mp){
            vector<int> temp;
            temp.push_back(it.first);
            temp.push_back(it.second);
            res.push_back(temp);
        }

        return res;
    }
};