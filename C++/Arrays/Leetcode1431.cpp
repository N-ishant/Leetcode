//Leetcode 1431 => Kids with the greatest number of candies.
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int max=*max_element(candies.begin(),candies.end());

        for(auto i : candies){
            if(i + extraCandies>=max){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }

        return ans;
    }
};