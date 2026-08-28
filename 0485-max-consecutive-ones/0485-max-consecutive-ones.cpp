class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        long n=nums.size();
        long count=0;
        long maxCount=0;
        for(long i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                maxCount=max(count,maxCount);
            }else{
                count=0;
            }
        }
        return maxCount;
    }
};