class Solution {
public:
    bool canFinish(vector<int>& piles, int k, int h){
        int n=piles.size();
        long long hours=0;
        for(int i=0;i<n;i++){
            hours+=ceil((double)(piles[i])/(double)(k)); 
        }
        if(hours>h) return false;
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1, high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canFinish(piles,mid,h)){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};