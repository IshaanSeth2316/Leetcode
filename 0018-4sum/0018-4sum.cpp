class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int st=j+1, end=n-1;
                while(st<end){
                    long long sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[st]+(long long)nums[end];
                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[st],nums[end]});
                        while(st<end && nums[st]==nums[st+1]) st++;
                        while(st<end && nums[end]==nums[end-1]) end--;
                        st++;
                        end--;
                    }
                    else if(sum<target){
                        st++;
                    }
                    else{
                        end--;
                    }
                }
            }
        }
        return ans;
    }
};