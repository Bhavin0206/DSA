class Solution {
public:
    bool validPalindrome(string s) {
        int left=0;
        int right=s.length()-1;
        bool chk=true;

        while(left<right){
            if(s[left]!=s[right]){
                if(checkPalindrome(s,left+1,right)|| checkPalindrome(s,left,right-1)){
                    chk= true;
                }else{
                    chk= false;
                }
                
                return chk;
            }
            left++;
            right--;
        }
        return chk;
    }

    bool checkPalindrome(string s,int left,int right){
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};