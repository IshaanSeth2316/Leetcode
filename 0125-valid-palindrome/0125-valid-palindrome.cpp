class Solution {
public:
    bool isAlphaNum(char ch){
        return(ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z');
    }
    bool check(int i,int j,string& s){
        if(i>=j) return true;
        if(!isAlphaNum(s[i])) return check(i+1,j,s);
        if(!isAlphaNum(s[j])) return check(i,j-1,s);
        if(tolower(s[i])!=tolower(s[j])) return false;
        return check(i+1,j-1,s);
    }
    bool isPalindrome(string s) {
        return check(0,s.length()-1,s);
   }
};