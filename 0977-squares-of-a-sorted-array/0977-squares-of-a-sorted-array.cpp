class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int st=0,end=n-1;
        vector<int> ans(n,0);
        int k=n-1;
        while(st<=end){
            if(abs(nums[st])<=abs(nums[end])){
                ans[k]=nums[end]*nums[end];
                end--;
            }else{
                ans[k]=nums[st]*nums[st];
                st++;
            }
            k--;
        }   
        return ans;
    }
};