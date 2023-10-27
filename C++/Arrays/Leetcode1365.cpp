//Leetcode 1365 => How Many Numbers are Smaller Than the Current Number
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            int count = 0;
            for(int j=0;j<nums.size();j++){
                if((nums[j] < nums[i]) && (i != j)){
                    count++;
                }
            }
            ans.push_back(count);
        }  
          
        return ans;   
    }
};