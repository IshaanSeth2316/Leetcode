class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int temp=x;
        if(x<0){
            return false;
        }
        if(x==0){
            return true;
        }
        while(x!=0){
            rev=rev*10+x%10;
            x/=10;
        }
        return temp==rev;
    }
};