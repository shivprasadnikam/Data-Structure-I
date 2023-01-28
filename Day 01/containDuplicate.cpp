
                                                                  // Contains Duplicate  //


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
       /* 1) using sorting
        sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]==nums[i-1])
                return true;
            
        }*/

        // 2) using hashmap
        unordered_map<int,int>ans;

        for(int i=0; i<nums.size(); i++)
        {
            ans[nums[i]]++;
        }
        for(auto x:ans)
        {
            if(x.second>1)
            return true;
        }
        return false;
        
    }
};
