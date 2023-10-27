//Leetcode 191 => Number of 1 Bits
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n = n>>1;       // [(n = n>>1) === (n = n/2)]
        }
        return count;
    }
};